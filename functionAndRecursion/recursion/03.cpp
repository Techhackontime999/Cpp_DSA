#include <iostream>
using namespace std;
void print(int n)
{
    //base of recursion
    if (n == 101)
    {
        return;
    }
    cout << " " << n << " ";
    print(n + 1);
}
int main()
{
    print(1);
    return 0;
}