#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Deleted: " << queueArr[front] << endl;
    front++;
}

int main() {
    dequeue();
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
}