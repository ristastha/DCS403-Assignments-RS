#include <iostream>
using namespace std;

int main(){
    int a ,b;
    cin >> a >> b;

    int smaller = (a < b) ? a : b;
    cout << "Smaller number is " << smaller;

    return 0;

}
