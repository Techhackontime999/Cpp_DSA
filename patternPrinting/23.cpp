#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    for (int i = 1; i < 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * x - 1; j++)
        {
            cout << " * ";
        }
        x--;

        cout << endl;
    }

    return 0;
}