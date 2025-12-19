#include <iostream>
using namespace std;
#include<stack>
//stack follow the lifo principle i.e last in first out
// last element is first out
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.emplace(6);
    s.emplace(7);

    s.pop();
    stack<int> s2;
    // s2.swap(s);//copy element of s in s2
    // s2=s;//copy element of s in s2
   //printing element of the stack
//    while (! s.empty())
//    {
//     cout<<s.top()<<" ";
//     s.pop();
//    }
  
//printing s2
while (! s2.empty())
   {
    cout<<s2.top()<<" ";
    s2.pop();
   }

    return 0;
}