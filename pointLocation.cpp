#include <iostream>
using namespace std;
int main()
{
    cout << "\n.................Program to find point location................\n";
    int x, y;
    cout << "enter x cordinate: ";
    cin >> x;
    cout << "enter y cordinate: ";
    cin >> y;
    // solution
    if (x == 0)
    {
        if (y == 0)
        {
            cout << "point ( " << x << "," << y << " ) lies at origin\n";
        }
        else
        {
            cout << "point ( " << x << "," << y << " ) lies at y-axis\n";
        }
    }
    else if (y == 0)
    {
        if (x == 0)
        {
            cout << "point ( " << x << "," << y << " ) lies at origin\n";
        }
        else
        {
            cout << "point ( " << x << "," << y << " ) lies at x-axis\n";
        }
    }
    else if (x > 0 && y > 0)
    {
        cout << "point ( " << x << "," << y << " ) lies in the first coordinate\n";
    }
    else if (x < 0 && y > 0)
    {
        cout << "point ( " << x << "," << y << " ) lies in the second coordinate\n";
    }
    else if (x < 0 && y < 0)
    {
        cout << "point ( " << x << "," << y << " ) lies in the third coordinate\n";
    }
    else
    {
        cout << "point ( " << x << "," << y << " ) lies in the fourth coordinate\n";
    }

    return 0;
}