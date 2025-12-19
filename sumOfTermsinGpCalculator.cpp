#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    cout << "\n................Sum of terms in G.P Calculator................\n";
    int a, r, n;
    cout << "Enter first term: ";
    cin >> a;
    int cp=a;

    cout << "Enter common-ratio: ";
    cin >> r;
    cout << "Number of terms: ";
    cin >> n;
    printf("Terms is : ");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << " " << a << " ";
        sum=sum+a;
        a = a * r;

    }
    printf("\n");
    printf("Sum of these terms starting from %d and up to %d terms in G.P is: ", cp, n);
    printf(" %d ", sum);
    printf("\n");
    return 0;
}