// negative elements in 1D array
// develop a program that finds all the negative elements from a given 1D array 


#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the arr's size: ";
    cin >> size;

    int arr[size];

    cout << "Enter the arr elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Negative elements arr: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}

// output:-

// Enter the arr's size: 5
// Enter the arr elements: 7
// 8
// -8
// -2
// 5
// Negative elements arr: -8 -2 