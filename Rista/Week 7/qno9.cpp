#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {5, 10, 15};
int front = 0, rear = 2;

int main() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else {
        cout << "Deleted: " << queueArr[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }
}