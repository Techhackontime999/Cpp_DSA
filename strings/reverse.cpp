#include <iostream>
using namespace std;
int main()
{
    string s = "Amit kr sahu";
    // s.reverse(s.begin(),s.end());
    // reveseing the string
    for (int i = 0, j = s.length()-1; i <= j; i++, j--)
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