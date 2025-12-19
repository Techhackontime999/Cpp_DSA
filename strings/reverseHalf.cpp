//input a string of even length and reverse the first half of string
#include <iostream>
using namespace std;
int main()
{
    string s = "Amit raj";
    int n=(s.length()-1);
    // s.reverse(s.begin(),s.begin()+n/2);
    // reveseing the string
    for (int i = 0, j = n/2; i <= j; i++, j--)
    {
        char temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    return 0;
}