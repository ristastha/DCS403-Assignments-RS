#include <iostream>
using namespace std;

int fibTail(int n, int a = 0, int b = 1) {
    if (n == 0)
        return a;
    return fibTail(n - 1, b, a + b);
}

int main() {
    int n;
    cin >> n;
    cout << fibTail(n);
    return 0;
}
