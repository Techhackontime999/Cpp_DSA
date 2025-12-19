#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vec)
{
    // call by reference
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
    cout << "size: " << vec.size() << " " << "capacity: " << vec.capacity() << " " << endl;
}
int main()
{
    vector<int> v;
    v.push_back(4);
    display(v);

    v.push_back(5);
    display(v);

    v.push_back(6);
    display(v);

    v.push_back(7);
    display(v);
    //    v.pop_back();
    //    v.pop_back();
    //    v.pop_back();
    //    v.pop_back();
    //    v.pop_back();
    // display(v);
    // cout<<v.back()<<endl;//return the back element from vector
    // cout<<v.front()<<endl;//return the front element from vector
    // v.clear();//its clear the vector
    // display(v);
    // cout<<v.data()<<endl;//return the address of first data in vector
    // bool result;
    // result=v.empty();//result true if vector is full
    // cout<<result<<endl;
    // vector<int> v1;
    // v.insert(1,3);

    return 0;
}