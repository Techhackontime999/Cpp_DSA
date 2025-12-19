#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    int arr[row][col] = {
        {1, 3, 4, 5},
        {5, 7, 8, 2},
        {0, 1, 4, 8}};

    cout << "Before traverse: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

    int brr[col][row];
    // traverse start
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    // traverse end
    cout << "After traverse: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << " " << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}