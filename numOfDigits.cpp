#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter number to count digit: ";
    cin>>num;
    cout<<"Number of digits in "<<num<<" is:";
    while (num>0)
    {
        num=num/10;
        count++;
    }

    cout<<" "<<count<<" ";
    return 0;
}