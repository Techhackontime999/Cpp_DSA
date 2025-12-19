#include <iostream>
using namespace std;
int noOfDigits(int num)
{
    // method-1 using loop
    // int count = 0;
    // while (num > 0)
    // {
    //     count++;
    //     num = num / 10;
    // }
    // return count;
    // method-2 without loop
    string str=to_string(num);
    return str.length();
}
int main()
{
    // int num = 123;
    //     cout << noOfDigits(num) << endl;
    string str="1234";
    cout<<str.length()<<endl;

    return 0;
}