#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue is Full\n";
        return;
    }
    if (front == -1)
        front = 0;
    queueArr[++rear] = value;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Deleted: " << queueArr[front] << endl;
    front++;
    if (front > rear)
        front = rear = -1;
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}