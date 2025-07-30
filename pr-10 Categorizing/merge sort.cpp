#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> tmp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            tmp.push_back(arr[left]);
            left++;
        }
        else
        {
            tmp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        tmp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        tmp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = tmp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int size;
    cout << "Enter array size :- ";
    cin >> size;

    vector<int> arr;
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    cout << "Before Merge sort :- " << endl;
    print_array(arr);

    merge_sort(arr, 0, size - 1);

    cout << "After Merge sort :- " << endl;
    print_array(arr);

    return 0;
}
