// Circular Queue using Array

// Efficient queue implementation (wrap-around when array end is reached).

#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Deleted: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1; // queue becomes empty
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display();
    cq.dequeue();
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60); // should wrap around
    cq.display();
}
