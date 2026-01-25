#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
