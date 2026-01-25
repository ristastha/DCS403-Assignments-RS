#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
