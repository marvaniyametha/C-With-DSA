// develop a program that prints the given custom alphabetic pattern using a nested for loop.


#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if (i == 1 || i == 3 || j == 1 || (i == 2 && j == 5)) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}

// output:-


//  *  *  *  *  * 
//  *           * 
//  *  *  *  *  * 
//  *             
//  *    