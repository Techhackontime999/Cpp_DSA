#include <iostream>
using namespace std;
int main()
{
    int num;
    printf("Enter number to check: ");
    scanf("%d", &num);
    // method-01 brute force approach to check numbr is prime or not
    //  bool isPrime=true;
    //  for (int i = 2; i < num-1; i++)
    //  {
    //     if (num%i==0)
    //     {
    //      isPrime=false;
    //     }

    // }
    // if (isPrime)
    // {
    //   cout<<num<<" is a prime number."<<endl;
    // }
    // else{
    //   cout<<num<<" is not a prime number."<<endl;

    // }

    // method-01 brute force optimized approach to check numbr is prime or not
    bool isPrime = true;
    // 1,2,3,4,5,6,7,8,9,10,11,12,13,14
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}