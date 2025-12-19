#include <iostream>
using namespace std;
void print(int n)
{
    //base of recursion
    if (n == 0)
    {
        return;
    }
    cout << " " << n << " ";
    print(n - 1);
}
int main()
{
    print(30);
    return 0;
}