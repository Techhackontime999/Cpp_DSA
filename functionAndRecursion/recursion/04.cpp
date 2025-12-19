#include <iostream>
using namespace std;
void print(int x, int n)
{
    // base of recursion
    if (x > n)
    {
        return;
    }
    cout << " " << x<< " ";
    print(x + 1, n);
}
int main()
{
    print(1, 70);
    return 0;
}