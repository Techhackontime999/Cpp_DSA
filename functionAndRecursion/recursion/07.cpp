#include <iostream>
using namespace std;
// print sum of 1 to n using wihout parametrized recursion
int sum(int n)
{
    // base of recursion
    if (n==0)
        return 0;

//    return n+sum(n-1);
//or
   return sum(n-1)+n;

}
int main()
{
    cout<<"Sum is: "<<sum(10)<<endl;
    return 0;
}