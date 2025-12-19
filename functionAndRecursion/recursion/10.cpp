#include <iostream>
using namespace std;
// print power of number any positive negative or zero power using wihout parametrized recursion
float pow(float x, float y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y < 0)
    {
        return 1.0 / (pow(x, -y));
    }
    else
    {
        return x * pow(x, y - 1);
    }
}
int main()
{
    float x = 2;
    // float y = -2;
    float y = 3;
    // float y = 0;

    cout << x << " raise to the power " << y << " is: " << pow(x, y) << endl;

    return 0;
}