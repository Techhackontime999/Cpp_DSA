#include <iostream>
using namespace std;
#include <cmath>
int noOfDigitsinBin(int num)
{
    int count = 0;
    ;
    while (num > 0)
    {
        count++;
        num = num / 2;
    }
    return count;
}
int decimalToBinary(int decNum)
{
    int binNum = 0;
    // double binNum = 0;

    // int i = 0;
    int pow=1;
    while (decNum > 0)
    {
        //work but avoid it because pow function return double and binNum is integer
        // binNum += ((decNum % 2) * (pow(10, i)));
        // decNum = decNum / 2;
        // i++;


        int rem=(decNum % 2);
        decNum = decNum / 2;
        binNum += (rem*pow);
        pow *= 10;
    }

    return int(binNum);
}
int main()
{
    int decNum = 4;
    // cout << "Enter your decimal number: ";
    // cin >> decNum;
    cout << "Binary conversion of " << decNum << " is: " << decimalToBinary(decNum) << endl;
cout<<(4%2)*pow(10,0)<<" "<<(2%2)*pow(10,1)<<" "<<(1%2)*pow(10,2)<<endl;
    return 0;
}