#include<iostream>
using namespace std;
//method-1
int factorial(int n){
if (n==0 || n==1)
{
    return 1;
}
return n*factorial(n-1);
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    //m-1
    cout<<"Factorial of "<<num<<" is: "<<factorial(num);
    //methos-2
    // int fact=1;
    // for (int i = 2; i <=num; i++)
    // {
    //     fact=fact*i;
    // }
    // cout<<"Factorial of "<<num<<" is: "<<fact;
    
    
    return 0;
}