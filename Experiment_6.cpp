#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of queue

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == MAX - 1);
    }

    // Enqueue operation
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " inserted into queue\n";
        }
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
        } else {
            cout << arr[front++] << " removed from queue\n";
        }
    }

    // Peek operation
    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    // Display operation
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements are:\n";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. isEmpty\n6. isFull\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.peek();
                break;

            case 4:
                q.display();
                break;

            case 5:
                if (q.isEmpty())
                    cout << "Queue is Empty\n";
                else
                    cout << "Queue is NOT Empty\n";
                break;

            case 6:
                if (q.isFull())
                    cout << "Queue is Full\n";
                else
                    cout << "Queue is NOT Full\n";
                break;

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 7);

    return 0;
}