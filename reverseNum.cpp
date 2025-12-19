#include <iostream>
using namespace std;

int reverseOfDecNum(int decNum)
{
    int newNum=0;
    while (decNum>0)
    {
       newNum=newNum*10;
       newNum=newNum+decNum%10;
       decNum=decNum/10;
    }
    return newNum;
}
int main()
{
    int decNum;
    cout << "Enter your decimal number: ";
    cin >> decNum;
    cout << "Reverse of " << decNum << " is: " << reverseOfDecNum(decNum) << endl;

    return 0;
}