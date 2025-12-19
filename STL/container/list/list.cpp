#include <iostream>
using namespace std;
#include <list>
//list is implememnted through doubly linked list so insertion and deletion we can done from the both end
//in list  we can't access element from at index we can only traverse through iterator begin.end,rbegin,rend etc that is same as pointer 
int main()
{
    // list<int> l={1,2,3,4};
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(6);
    l.push_front(7);
    l.push_front(8);
    l.push_front(9);
    l.emplace_back(10);
    l.emplace_back(11);
    
    l.pop_back();
    l.pop_front();
    //method 1
    for (int val : l)
    {
        cout << val << " ";
    }
    //method 2
    // cout<<*(l.begin())<<endl;
    // cout<<*(l.end())<<endl;
    

    
    return 0;
}