#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        this->head = nullptr;
    }

    // Method to insert a new node at the end of the list
    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    // Method to delete a node with a given value
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        // If head node itself holds the key to be deleted
        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the key to be deleted, keep track of the previous node
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == nullptr) {
            std::cout << "Node with value " << key << " not found in the list." << std::endl;
            return;
        }

        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp;
    }

    // Method to display the linked list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;

    // Appending elements to the list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    std::cout << "Original linked list: ";
    list.display();

    // Deleting a node with value 3
    list.deleteNode(3);
    std::cout << "Linked list after deleting node with value 3: ";
    list.display();

    return 0;
}
