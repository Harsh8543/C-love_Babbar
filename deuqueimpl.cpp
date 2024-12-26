#include <iostream>
using namespace std;

class Deque {
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure
    Deque(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Push element at the front of deque
    bool pushFront(int x) {
        // Check if deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            return false;
        }
        // Insert first element
        else if (front == -1) {
            front = rear = 0;
        }
        // Maintain cyclic nature when front is at 0
        else if (front == 0) {
            front = size - 1;
        }
        // General case
        else {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Push element at the rear of deque
    bool pushRear(int x) {
        // Check if deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            return false;
        }
        // Insert first element
        else if (front == -1) {
            front = rear = 0;
        }
        // Maintain cyclic nature when rear is at the end
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        }
        // General case
        else {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pop element from the front of deque
    bool popFront() {
        // Check if deque is empty
        if (front == -1) {
            return false;
        }
        // Case of single element
        if (front == rear) {
            front = rear = -1;
        }
        // Maintain cyclic nature when front is at the end
        else if (front == size - 1) {
            front = 0;
        }
        // General case
        else {
            front++;
        }
        return true;
    }

    // Pop element from the rear of deque
    bool popRear() {
        // Check if deque is empty
        if (front == -1) {
            return false;
        }
        // Case of single element
        if (front == rear) {
            front = rear = -1;
        }
        // Maintain cyclic nature when rear is at 0
        else if (rear == 0) {
            rear = size - 1;
        }
        // General case
        else {
            rear--;
        }
        return true;
    }

    // Get the front element of the deque
    int getFront() {
        if (front == -1) {
            return -1; // Deque is empty
        }
        return arr[front];
    }

    // Get the rear element of the deque
    int getRear() {
        if (rear == -1) {
            return -1; // Deque is empty
        }
        return arr[rear];
    }

    // Check if deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if deque is full
    bool isFull() {
        return ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)));
    }
};

int main() {
    Deque dq(5);

    dq.pushRear(1);
    dq.pushRear(2);
    dq.pushFront(3);
    dq.pushFront(4);
    dq.pushRear(5);

    cout << "Front element: " << dq.getFront() << endl; // Output: 4
    cout << "Rear element: " << dq.getRear() << endl;  // Output: 5

    dq.popFront();
    cout << "Front element after popFront: " << dq.getFront() << endl; // Output: 3

    dq.popRear();
    cout << "Rear element after popRear: " << dq.getRear() << endl;  // Output: 2

    return 0;
}






























































































































































































































































































































































































































































































































































































































































































































































































































































































































