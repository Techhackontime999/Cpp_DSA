#include <iostream>
using namespace std;
int main()
{
    int *arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    // arr = (int *)realloc(arr, 24);
    // arr[3] = 4;
    // arr[4] = 5;
    // arr[5] = 6;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << " " << arr[i] << " ";
    // }
    int *brr = (int *)realloc(arr, 24);
     brr[3] = 4;
    brr[4] = 5;
    brr[5] = 6;
    // brr[6] = 7;

    for (int i = 0; i < 6; i++)
    {
        cout << " " << brr[i] << " ";
    }
    return 0;
}