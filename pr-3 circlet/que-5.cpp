//  develop a program that prints the given full pyramid pattern using a nested for loop .
 
#include<iostream>
using namespace std;


int main() {
    int i, j, k;


    for(i = 5; i >= 1; i--) {

        for(k = 1; k < i; k++) {
            cout << "  ";  
        }

        for(j = i; j <= 5; j++) {
            cout << j << " ";
        }
        for(j = 4; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl; 
    }

    return 0;
}


// output:-

//         5 
//       4 5 4 
//     3 4 5 4 3 
//   2 3 4 5 4 3 2 
// 1 2 3 4 5 4 3 2 1 