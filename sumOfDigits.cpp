#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sumOfDigit=0;
    while (n>0)
    {
       sumOfDigit=sumOfDigit+n%10;
       n=n/10;
    }
    cout<<"Sum of digits is: "<<sumOfDigit;
    return 0;
}