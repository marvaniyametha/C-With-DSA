// develop a program to find the sum of number's first and last digits 

#include <iostream>
using namespace std;

int main() {
    int num, first, last;
    
    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;
    first = num;

    while (first >= 10) {
        first = first / 10;
    }
    cout << "Sum of first and last digit = " << first + last << endl;
}
