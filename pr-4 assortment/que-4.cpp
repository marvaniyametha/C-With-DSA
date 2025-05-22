// sum of element in row and coloum of 2D array

// develop a program to print and find the sum of all elements of a given row & coloum from a 2D array.

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int i, j;

    cout << " elements of  arr:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe arr is:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of row:\n";
    for (i = 0; i < 3; i++) {
        int rSum = 0;
        for (j = 0; j < 3; j++) {
            rSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum: " << rSum << endl;
    }

    cout << "\nSum of  column:\n";
    for (j = 0; j < 3; j++) {
        int colSum = 0;
        for (i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " sum: " << colSum << endl;
    }

    return 0;
}

// output:-

//  elements of  arr:
// 1 2 3 4 5 6 7 8 9

// The arr is:
// 1 2 3 
// 4 5 6 
// 7 8 9 

// Sum of each row:
// Row 1 sum: 6
// Row 2 sum: 15
// Row 3 sum: 24

// Sum of each column:
// Column 1 sum: 12
// Column 2 sum: 15
// Column 3 sum: 18