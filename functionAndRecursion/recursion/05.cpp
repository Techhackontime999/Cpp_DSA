#include <iostream>
using namespace std;
void print(int n)
{
    // base of recursion
    if (n == 0)
    {
        return;
    }
    print(n - 1);

    cout << " " << n << " ";
}
int main()
{
    print(30);
    return 0;
}