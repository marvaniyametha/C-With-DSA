#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) 
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, target;
    cout << "Enter the size of array :-";
    cin >> size;

    int arr[size]; 
    cout << "Input array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; 
    }

    cout << "Enter the Target Value :- " << endl;
    cin >> target;

    int result = linearSearch(arr, size, target); 
    if (result != -1)
    {
        cout << "Element is present at index " << result << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}
