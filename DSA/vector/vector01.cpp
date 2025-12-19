#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(1);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(2);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(3);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(4);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(5);
    cout << v.size() << " " << v.capacity() << endl;

    for (int vector : v)
    {
        cout << vector << " ";
    }
    cout << endl;

    int arr[4] = {1, 2, 3, 4};
    for (int element : arr)
    {
        cout << element << " ";
    }
    // v.pop_back();
    // cout << v.size() << " " << v.capacity() << endl;
    //  v.pop_back();
    //     cout << v.size() << " " << v.capacity() << endl;
    //      v.pop_back();
    //     cout << v.size() << " " << v.capacity() << endl;
    //      v.pop_back();
    //     cout << v.size() << " " << v.capacity() << endl;
    //      v.pop_back();
    //     cout << v.size() << " " << v.capacity() << endl;

    return 0;
}