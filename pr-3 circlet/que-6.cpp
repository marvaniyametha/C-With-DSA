// develop the program that prints the given inverted left triangle pattern using a nested for loop. 

#include<iostream>
using namespace std;

int main() {
    int i, j, k;


    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for(k = 5; k > i; k--) {
            cout << "  ";
        }
        for(k = 5; k > i; k--) {
            cout << "  ";
        }

        for(j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;  
    }

    return 0;
}




//    output:-

// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 