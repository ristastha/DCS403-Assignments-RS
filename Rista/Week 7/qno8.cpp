#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE];
int front = -1, rear = -1;

int main() {
    if ((rear + 1) % SIZE == front)
        cout << "Queue is Full\n";
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        queueArr[rear] = 10;
        cout << "Inserted\n";
    }
}