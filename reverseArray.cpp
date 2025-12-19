#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 3, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "Reverse Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << endl;
    return 0;
}