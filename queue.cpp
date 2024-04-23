#include <iostream>
using namespace std;

void enqueue(int arr[], int &rear, int &front, int size)
{
    if (rear == size-1)
    {
        cout << "queue is full." << endl;
    }
    else
    {
        int val;
        cout << "Enter the value: ";
        cin >> val;
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }
}
void dequeue(int arr[], int &front, int &rear)
{
    if (front > rear)
    {
        cout << "Queue is empty." << endl;
        
    }
    else
    {
        cout << "Dequeue value is: " << arr[front] << endl;
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}

void display(int arr[], int front, int rear)
{
    if (front==-1||front > rear)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}


int main()
{
    int front = -1, rear = -1, size = 50;
    int arr[size];
    bool z = true;
    int inp;
    cout << "Enter a number between 1-Enqueue 2-Dequeue 3-Display to 4-." << endl;
    while(z){
        cin>>inp;
        switch (inp)
        {
        case 1:
            enqueue(arr, front, rear);
            break;
        case 2:
            dequeue(arr, front, rear);
            break;
        case 3:
            display(arr, front, rear);
            break;
        case 4:
            z=false;
            break;
        default:
            cout<<"You enter invalid input."<<endl;
            break;
        }
    }

    return 0;
}
