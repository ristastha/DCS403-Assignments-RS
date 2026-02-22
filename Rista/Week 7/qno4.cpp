#include <iostream>
using namespace std;

int queueArr[5] = {10, 20, 30};
int front = 0;

int main() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else
        cout << "Front Element: " << queueArr[front];
}