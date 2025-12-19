// logrithmic approach to make a power function
// 2 to the power 2 is: 2 to the power 1 * 2 to the power 1
// 2 to the power 4 is: 2 to the power 2 * 2 to the power 2
#include <iostream>
using namespace std;
// print  power of number using wihout parametrized recursion
int pow(int x, int y)
{
    if (y == 0)//base
    {
        return 1;
    }

    else if (y % 2 == 0)//work
    {
        int a = pow(x, y / 2);//call
        return a * a;
    }
    else
    {
        return x * pow(x, y - 1);//call
    }
}
int main()
{
    int x = 3;
    int y = 4;
    cout << x << " raise to the power " << y << " is: " << pow(x, y) << endl;

    return 0;
}