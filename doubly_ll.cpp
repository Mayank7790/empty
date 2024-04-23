#include <iostream>

using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int newData) {
        Node* newNode = new Node;
        newNode->data = newData;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr)
            head->prev = newNode;

        head = newNode;
        cout << "Node inserted at the beginning successfully." << endl;
    }

    // Function to delete a node by value
    void deleteNode(int value) {
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->data == value) {
                if (temp->prev != nullptr)
                    temp->prev->next = temp->next;
                else
                    head = temp->next;

                if (temp->next != nullptr)
                    temp->next->prev = temp->prev;

                delete temp;
                cout << "Node with value " << value << " deleted successfully." << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Node with value " << value << " not found." << endl;
    }

    // Function to display the doubly linked list
    void display() {
        Node* temp = head;

        if (temp == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }

        cout << "Doubly Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Menu function to interact with the doubly linked list
void menu() {
    DoublyLinkedList dll;
    int choice, data;

    do {
        cout << "\nDoubly Linked List Operations:" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert: ";
                cin >> data;
                dll.insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> data;
                dll.deleteNode(data);
                break;
            case 3:
                dll.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}

// Main function
int main() {   
    menu();
    return 0;
}
