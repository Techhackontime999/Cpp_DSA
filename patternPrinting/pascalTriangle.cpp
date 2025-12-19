#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int numOfCombination(int n, int r)
{
    if (n >= r)
    {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
    return -1;
}
int main()
{
    int height;
    cout << "Enter height of triangle: ";
    cin >> height;
    for (int i = 1; i < height + 1; i++)
    {
        for (int k = i; k < height; k++)
        {
            cout << "   ";
        }
        int x = 0;

        for (int j = 0; j < 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                // if (j == 0 || j == 2 * i - 2)
                // {
                //     cout << " " << 1 << " ";

                // }
                // else
                // {
                //     cout << " " << "*" << " ";

                // }

                cout << " " << numOfCombination(i - 1, x) << " ";
                x++;
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}