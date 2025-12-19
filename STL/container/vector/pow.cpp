// implement pow(x,n) , which calculate x raise to the power n
// where n belongs negetive integer range to positive integer range.
#include <iostream>
using namespace std;
// bruite force approach to making a power function
//  double pow(double x, int n)
//  {
//      double ans=1;
//      if (n == 0)
//          return 1;
//      if (x == 1)
//          return 1;
//      if (n == -1)
//          return 1;
//      if (x == 0)
//          return 0;
//      if (n==1) return x;
//      if (n > 1)
//      {
//          for (int i = 0; i < n; i++)
//          {
//              ans*=x;
//          }

//     }
//     if (n < -1)
//     {
//         n=-n;
//         x=1/x;
//         for (int i = 0; i < n; i++)
//         {
//             ans*=x;
//         }

//     }
//     return ans;
// }
// bruite force optimized approach to making a power function

double pow(double x, int n)
{
    double ans = 1;
    if (n == 0)
        return 1;
    if (x == 1)
        return 1;
    if (x == 0)
        return 0;
    if (n == 1)
        return x;
    if (n < 0)
    {
        n = -n;
        x = 1 / x;
    }

    if (n % 2 == 0)
    {
        ans *= pow(x, n / 2) * pow(x, n / 2);
    }
    else
    {
        ans *= pow(x, n / 2) * pow(x, n / 2);
        ans *= x;
    }

    return ans;
}
//using binomial exponentiation most optimal

int main()
{
    int x, n;
    cout << "Enter indices: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;
    double result = pow(x, n);
    cout << x << " raise to the power " << n << " is: " << result << endl;
    return 0;
}