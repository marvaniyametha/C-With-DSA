// develop a program to count the total number of digit in a number

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;
   
    if (num < 0) {
        num = -num;
    }

    do {
        count++;
        num /= 10;
    } while (num != 0);

    cout << "Total digits: " << count << endl;

}
