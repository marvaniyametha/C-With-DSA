#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

   
    cout << "Enter your score (0 - 100): ";
    cin >> score;


    if (score >= 90 && score <= 100)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else if (score >= 0)
        grade = 'F';
    else {
        cout << "Invalid score!" << endl;
        return 1;
    }

   
    cout << "Your grade is: " << grade << endl;

    return 0;
}
