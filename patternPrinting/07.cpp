#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i % 2 == 0)
            {
                cout << " " << j + 1 << " ";
            }
            else
            {
                cout << " " << char(j + 65) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}