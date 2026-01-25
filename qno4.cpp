#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    do {
        count++;
        temp /= 10;
    } while (temp != 0);

    cout << "Number of digits in " << num << " is: " << count << endl;
    return 0;
}
