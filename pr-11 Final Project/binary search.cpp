#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
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

    sortArray(arr, size);

    cout << "Sort array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the Target Value :- " << endl;
    cin >> target;

    int result = binarySearch(arr, size, target);
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
