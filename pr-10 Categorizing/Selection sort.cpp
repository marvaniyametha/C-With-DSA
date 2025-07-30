#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size :-";
    cin >> size;

    vector<int> arr(size); 
    cout << "Input Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; 
    }

    cout << "Selection sort :- " << endl;
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        int c = arr[i];               
        arr[i] = arr[minIndex];      
        arr[minIndex] = c;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 

    return 0;
}
}