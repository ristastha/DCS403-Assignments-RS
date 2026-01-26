#include <iostream>
using namespace std;

void printArray (int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int nums[]= {3, 6, 9};
    printArray(nums, 3);
    
}
