#include <iostream>
using namespace std;

int main() {
    double sum = 0;

    for (int i = 1; i <= 97; i += 2) {
        sum += (double)i / (i + 2);
    }

    cout << "Sum = " << sum;
    return 0;
}
