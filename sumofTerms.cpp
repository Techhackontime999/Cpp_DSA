#include<iostream>
using namespace std;
int main(){
     cout << "\n................Sum of terms in A.P Calculator................\n";
     int a,d,n;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter common-difference: ";
    cin>>d;
    cout<<"Number of terms: ";
    cin>>n;
    printf("Terms is : ");
    for (int i = a; i <= a+(n-1)*d; i+=d)
    {
        // printf(" %d ",i);
        cout<<" "<<i<<" ";

    }
    printf("\n");
    printf("Sum of these terms starting from %d and up to %d terms in A.P is: ",a,n);
    int sum=0;
    sum=(n/2)*(2*a+(n-1)*d);
    printf(" %d ",sum);
    printf("\n");
    return 0;
}