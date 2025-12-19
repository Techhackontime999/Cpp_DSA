#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int numOfPermutation(int n, int r)
{
    if (n >= r)
    {
        return factorial(n) / factorial(n - r);
    }
    return -1;
}
// void printAllCombination(int n, int r)
// {
//     cout << "All possible combination given below in colection of " << n << " things we have to select " << r << " things." << endl;
//     cout << "All" << n << "things are marked with number" << endl;
// }
int main()
{
    // cout << factorial(4) << endl;
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout << "Number of permutation possible: " << numOfPermutation(n, r) << endl;
    // printAllCombination(n, r);
    return 0;
}
