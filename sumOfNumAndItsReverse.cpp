#include <iostream>
using namespace std;
int reverseNum(int num)
{
    int rnum = 0;
    while (num > 0)
    {
        rnum *= 10;
        rnum += (num % 10);
        num /= 10;
    }

    return rnum;
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Sum of "<<num<<" and its reverse "<<reverseNum(num)<<" is : "<<num+reverseNum(num);

    return 0;
}