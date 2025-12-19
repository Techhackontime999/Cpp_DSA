#include <iostream>
using namespace std;
int main()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     int k = 1;
    //     for (int j = 0; j < i + 1; j++)
    //     {

    //         cout << "  " << k << " ";
    //         k = k + 2;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i+1; j++)
        {

            cout << "  " << 2*j-1 << " ";
        }
        cout << endl;
    }
    return 0;
}