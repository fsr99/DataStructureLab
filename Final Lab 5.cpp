#include <iostream>
using namespace std;

int *arr;
int front = -1;
int rear = -1;
int maxSize;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return (rear + 1) % maxSize == front;
}

void enqueue(int val) {
    if (isFull()) {
        cout << "Cannot enqueue. Queue is full." << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % maxSize;
    }
    arr[rear] = val;
}
void dequeue() {
    if (isEmpty()) {
        cout << "Cannot dequeue. Queue is empty." << endl;
        return;
    }
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % maxSize;
    }
}
void display() {
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
        return;
    }
    cout << "Queue Elements: ";
    int i = front;
    if (front <= rear) {
        while (i <= rear) {
            cout << arr[i] << " ";
            i++;
        }
    } else {
        while (i < maxSize) {
            cout << arr[i] << " ";
            i++;
        }
        i = 0;
        while (i <= rear) {
            cout << arr[i] << " ";
            i++;
        }
    }
    cout << endl;
}
int main() {
    int queueSize = 8;
    maxSize = queueSize;
    arr = new int[queueSize];

    enqueue(9);
    enqueue(11);
    enqueue(23);
    enqueue(37);
    enqueue(27);
    enqueue(33);
    enqueue(14);
    enqueue(12);

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();

    enqueue(15);
    enqueue(25);
    enqueue(35);
    enqueue(45);

    display();

    delete[] arr;
    return 0;
}
