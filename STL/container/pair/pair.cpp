// #define PI 3.14
#include <iostream>
using namespace std;
int main()
{
    pair<string, int> p={"ram",2};
    // p.first="rohan";
    // p.second=3;
    pair<string, int> p2;
    p2=p;
    // cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    return 0;
}