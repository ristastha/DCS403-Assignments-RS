#include <iostream>
using namespace std;

int queueArr[5] = {10, 20, 30};
int front = 0, rear = 2;

int main() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else {
        for (int i = front; i <= rear; i++)
            cout << queueArr[i] << " ";
    }
}