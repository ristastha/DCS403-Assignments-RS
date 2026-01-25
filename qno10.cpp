#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (0 to stop): ";
    cin >> num;

    while (num != 0) {
        cout << "You entered: " << num << endl;
        cin >> num;
    }

    cout << "Loop Stopped. Sentinel value entered." << endl;
    return 0;
}
