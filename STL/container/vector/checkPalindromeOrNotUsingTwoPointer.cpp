#include <iostream>
using namespace std;
int main()
{
    string name = "abcdedcba";
    int i = 0, j = name.length() - 1;
    bool result = true;
    while (i < j)
    {
        if (name[i] != name[j])
        {
           result = false;
        }
       
        i++, j--;
    }
   if(result){
    cout<<name<<" is a palindrome string."<<endl;
   }
   else{
    cout<<name<<" is not a palindrome string."<<endl;

   }
    return 0;
}