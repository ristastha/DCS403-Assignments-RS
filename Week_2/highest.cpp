#include <iostream>
using namespace std;

int main() {
    int n, score, maxScore;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter score: ";
    cin >> maxScore;

    for (int i = 2; i <= n; i++) {
        cout << "Enter score: ";
        cin >> score;
        if (score > maxScore)
            maxScore = score;
    }

    cout << "Highest score = " << maxScore;
    return 0;
}
