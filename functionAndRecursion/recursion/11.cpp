// write a program to print nth fibonacci number
// 1 1 2 3 5 8 13 21 34 55 89 .....
#include <iostream>
using namespace std;

int fibonacciNum(int nth)
{
    if (nth == 1 || nth == 2)//base
    {
        return 1;
    }

    return fibonacciNum(nth - 1) + fibonacciNum(nth - 2);//call+work
}
void printFibonacci(int nth){
    if (nth==0)//base
    {
        return;
    }
    printFibonacci(nth-1);//call
    cout<<" "<<fibonacciNum(nth)<<" ";//work
    return;
}
int main()
{
    int nth;
    nth=13;
    // cout<<nth<<" fibonacci number is: "<<fibonacciNum(nth)<<endl;
     cout<<"Fibonacci series up to "<<nth<<" terms."<<endl;
     printFibonacci(nth);
    return 0;
}