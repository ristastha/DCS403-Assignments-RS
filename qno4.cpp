#include <iostream>
using namespace std;


double min(double array[], int size) {
    double smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i]; 
        }
    }
    return smallest;
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    double smallestValue = min(numbers, SIZE);
    cout << "The smallest number is: " << smallestValue << endl;

    return 0;
}
