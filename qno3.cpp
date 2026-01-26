#include <iostream>
using namespace std;

double min(double array[], int size) {
    if (size <= 0) {
        cout << "Array is empty!" << endl;
        return 0;
    }
    
    double smallest = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i]; 
        }
    }
    return smallest;
}

int main() {
    double numbers[] = {3.5, 7.2, 1.8, 9.0, 2.4};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    double smallestValue = min(numbers, n);
    cout << "The smallest element in the array is: " << smallestValue << endl;

    return 0;
}
