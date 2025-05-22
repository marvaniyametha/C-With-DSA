// develop a program that prints the given inverted left half triangle pattern a nested for loop.

#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j >= i) {
                if (j % 2 == 0)
                    cout << "0";
                else
                    cout << "1";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

}


// output:-

// 10101
//  0101
//   101
//    01
//     1