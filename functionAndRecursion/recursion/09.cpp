#include <iostream>
using namespace std;
// print  power of number using wihout parametrized recursion
int pow(int x,int y){
    if (y==0)
    {
        return 1;
    }
    
    return x*pow(x,y-1);
}
int main()
{
    int x=3;
    int y=4;
    cout<<x<<" raise to the power "<<y<<" is: "<<pow(x,y)<<endl;

    return 0;
}