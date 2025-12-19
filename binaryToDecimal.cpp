#include <iostream>
using namespace std;
#include <cmath>
int binaryToDecimal(int binNum)
{
    int decNum = 0;
    int i = 0;
    // int pow = 1;
    while (binNum > 0)
    {

        decNum=decNum+((binNum%10)*pow(2,i));
        binNum=binNum/10;
        i++;

        // int rem = binNum % 10;
        // binNum = binNum / 10;
        // decNum += rem * pow;
        // pow *= 2;
    }
    return decNum;
}
int main()
{
    int binNum = 1111;
    cout << binaryToDecimal(binNum) << endl;
    return 0;
}