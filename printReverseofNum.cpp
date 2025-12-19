#include <iostream>
#include <math.h>
using namespace std;
int numOfDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}
int main()
{
    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // int reverseNum = 1;
    // while (n > 0)
    // {
    //     reverseNum = reverseNum + ((n % 10) * pow(10, numOfDigit(n) - 1));
    //     n = n / 10;
    // }
    // cout << reverseNum;

    // METHOD-2
    int n;
    cout << "Enter number: ";
    cin >> n;
    int rnum = 0;
    while (n > 0)
    {
        rnum = rnum * 10;
        rnum = rnum + (n % 10);
        n = n / 10;
    }
    cout << rnum;

    return 0;
}