#include <iostream>
using namespace std;
#include <vector>
int count = 0;
void bubbleSort(vector<int> &arr) // time complexity O(n*n)
{
    int n = arr.size();
    bool isswap = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
            // count++;
        }
        if (!isswap)
        {
            return;
        }
    }
    return;
}
void selectionSort(vector<int> &arr) // time complexity O(n*n)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {

        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minidx] > arr[j])
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }

    return;
}
void insertionSort(vector<int> &arr) // time complexity O(n*n)
{
    int n = arr.size();
    int j;
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    return;
}
void mergeSort(vector<int> &arr)
{
    
}
void quickSort(vector<int> &arr)
{
}
void heapSort(vector<int> &arr)
{
}
void countSort(vector<int> &arr)
{
}
void bucketSort(vector<int> &arr)
{
}
int main()
{
    vector<int> arr = {3, 1, 5, 4, 0};
    // vector<int> arr = {0, 1, 2, 3, 4};

    printf("before array is: ");
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    // mergeSort(arr);
    // quickSort(arr);
    // countSort(arr);
    // bucketSort(arr);

    printf("\nAfter Array is: ");
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl
    //      << count << " " << endl;

    return 0;
}