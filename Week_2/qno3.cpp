#include  <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade A";
    } else if (marks >= 60){
        cout << "Grade B";
    } else if (marks >= 40) {
        cout << "Grade C";
    } else {
        cout << "Grade F";
    }
    return 0;
    }
    
