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

int main() {
    enqueue(5);
    enqueue(15);
    enqueue(25);

    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
}