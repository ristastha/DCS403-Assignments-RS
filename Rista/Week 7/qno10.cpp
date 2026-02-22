#include <iostream>
using namespace std;

int queueArr[5] = {5, 10, 15};
int front = 0;

int main() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else
        cout << "Front Element: " << queueArr[front];
}