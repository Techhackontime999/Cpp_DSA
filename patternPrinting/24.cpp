#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int y=3;
    for (int i = 1; i < 8; i++)
    {
        if (i < 5)
        {
            for (int k = i; k < 4; k++)
            {
                cout << "   ";
            }

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " * ";
            }
        }
        else
        {

            for (int k = x; k < 4; k++)
            {
                cout << "   ";
            }
            for (int j = 0; j < 2*y-1; j++)
            {
                cout<<" * ";
            }
            
            x--;
            y--;
        }
        cout << endl;
    }

    return 0;
}