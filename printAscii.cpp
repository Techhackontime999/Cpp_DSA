#include <iostream>
using namespace std;
int findASCIIValue(char ch)
{
    int val = ch;
    return val;
}
int main()
{
    //    char ch;
    //     cout<<"Enter charecter: ";
    //     cin>>ch;
    // cout<<"ASCII Value of "<<ch<<" --> "<<findASCIIValue(ch);


    
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << "ASCII Value of " << i << " --> " << findASCIIValue(i) << endl;
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << "ASCII Value of " << i << " --> " << findASCIIValue(i) << endl;
    }
    for (char i = '0'; i <= '9'; i++)
    {
        cout << "ASCII Value of " << i << " --> " << findASCIIValue(i) << endl;
    }
    
    return 0;
}