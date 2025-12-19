#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int productOfDigit=1;
    while (n>0)
    {
       productOfDigit=productOfDigit*(n%10);
       n=n/10;
    }
    cout<<"Product of digits is: "<<productOfDigit;
    return 0;
}