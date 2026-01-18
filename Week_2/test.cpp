#include <iostream>
using namespace std;

int main() {
    int year, month;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            cout << "February " << year << " has 29 days";
        else
            cout << "February " << year << " has 28 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "Month " << month << " has 30 days";
    else
        cout << "Month " << month << " has 31 days";

    return 0;
}
