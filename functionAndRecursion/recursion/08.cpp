#include <iostream>
using namespace std;
// print factorial of 1 to n using wihout parametrized recursion
int mul(int n)
{
    // base of recursion
    if (n == 0 || n == 1)
        return 1;

    return mul(n - 1) * n;
    //    or
    //    return n*mul(n-1);
}
int main()
{
    cout << "Sum is: " << mul(5) << endl;
    return 0;
}