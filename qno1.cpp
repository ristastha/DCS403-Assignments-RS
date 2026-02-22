#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty() {
    if (front == -1)
        return 1;
    return 0;
}

int isFull() {
    if (rear == SIZE - 1)
        return 1;
    return 0;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is Full!\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
    printf("Inserted: %d\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Deleted: %d\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void peek() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Front Element: %d\n", queue[front]);
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    peek();
    return 0;
}
