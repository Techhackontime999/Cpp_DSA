#include <iostream>
using namespace std;
// print sum of 1 to n using parametrized recursion
int sum(int x, int n)
{
    // base of recursion
    if (x > n)
        return 0;

   return x+sum(x+1,n);
}
int main()
{
    cout<<"Sum is: "<<sum(1, 5)<<endl;
    return 0;
}