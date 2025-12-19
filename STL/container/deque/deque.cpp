#include <iostream>
using namespace std;
#include <deque>
// deque means double ended queue is same as list in which insertion and deletion we can done from the both end but it is implemented throught the dynamic array so we can access element from at index
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.emplace_back(3);
    d.emplace_back(4);
    d.push_front(6);
    d.push_front(7);
    d.emplace_front(8);
    d.emplace_front(9);
    d.pop_back();
    d.pop_front();
    // for (auto i = d.begin(); i < d.end(); i++)
    // {
    //     cout << d.front() << endl;
    //     d.pop_front();
    // }
    // for (auto i = d.end() - 1; i >= d.begin(); i--)
    // {
    //     cout << d.back() << endl;
    //     d.pop_back();
    // }
   
    
    return 0;
}