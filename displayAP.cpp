#include<iostream>
using namespace std;
int main(){
    cout << "\n................A.P terms Generator................\n";
     int a,d,n;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter common-difference: ";
    cin>>d;
    cout<<"Number of terms: ";
    cin>>n;
    //using math
    // int tn;
    // for (int i = 1; i < n+1; i++)
    // {
    //     tn=a+(i-1)*d;
    //     cout<<tn<<" "; 
    // }
    
    //without math
    // for (int i = 0; i <n ; i++)
    // {
    //  cout<<a<<" "; 
    //  a=a+d;

    // }
    
//one more method
for (int i = a; i <= a+(n-1)*d; i+=d)
{
    printf(" %d ",i);
}

    return 0;
}