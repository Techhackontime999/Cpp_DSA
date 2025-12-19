#include <iostream>
using namespace std;
int main()
{
    int x = 11; // 01011
    int y = 30; // 11110
    // int z = x & y;//01010
    // int z=x|y;//11111
    // int z=!0;//1
    int z=x^y;//10101
    //^operator give 0 for same and 1 for different
    cout << z << endl;

    return 0;
}