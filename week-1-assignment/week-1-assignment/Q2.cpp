#include <iostream>
using namespace std;

int main(){
    float celsius;
    const float factor1 = 9.0;
    const float factor2 = 5.0;
    const float offset = 32.0;

    cout << "Celsius: ";
    cin >> celsius;
     float fahrenheit = (celsius * factor1/ factor2) + offset;

     cout << "Fahrenheit: " << fahrenheit << endl;

     return 0;

}
