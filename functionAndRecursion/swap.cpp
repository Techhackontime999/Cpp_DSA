#include <iostream>
using namespace std;
// void swap(int *x, int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 2;
    int y = 3;
    cout << "Before swap." << endl;
    cout << " x= " << x << " y= " << y << endl;
    cout << "After swap." << endl;
    // method-1
    // int temp;
    // temp = x;
    // x = y;
    // y = temp;
    // method-2
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // method-3
    // swap(&x, &y);
    // method-4
    // x=x^y;
    // y=x^y;
    // x=x^y;
    // method-5
    swap(x, y);
    cout << " x= " << x << " y= " << y << endl;

    return 0;
}