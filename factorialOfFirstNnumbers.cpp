#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Factorial of first n = : ";
    cin >> n;
    int fact = 1;

    cout << "Factorial of " << 0 << " is: " << fact << endl;
    cout << "Factorial of " << 1 << " is: " << fact << endl;

    for (int i = 2; i < n; i++)
    {

        fact = fact * i;
        cout << "Factorial of " << i << " is: " << fact << endl;
    }
    return 0;
}