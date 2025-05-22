// develop a program to find the largest element from a given 2D array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter  row size: ";
    cin >> rows;
    cout << "Enter  column size: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int largest = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}


// output:- 

// Enter  row size: 3
// Enter  column size: 3
// Enter the elements of the array:
// 1 2 3 4 5 6 7 8 9 
// The largest element is: 9