#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 || i == 3)
            {

                cout << " * ";
            }
            else
            {
                if (j == 0 || j == 5)
                {
                    cout << " * ";
                }
                else{
                    cout<<"   ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}