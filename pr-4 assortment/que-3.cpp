// largest element in 2D array 

// develop a program to find the transpose matrix of a given 2D array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "  row & column size: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << " elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << " transpose matrix array:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// output:-
//   row & column size: 3 3
//  elements of the array:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
//  transpose matrix array:
// 1 4 7 
// 2 5 8 
// 3 6 9 