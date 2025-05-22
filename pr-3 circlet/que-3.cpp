// develop a program that prints the given left half triangle pattern using a nested for loop.

#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {  
        
        for (int s = 1; s < i; s++) {
            cout << " ";
        }
       
        for (int j = i; j <= 5; j++) {
            cout << j;
        }
        
        cout << endl;
    }
}

    


// output:-


//     5
//    45
//   345
//  2345
// 12345
