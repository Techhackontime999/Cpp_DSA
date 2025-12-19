// in this problem we have a array problem is we have to rotate this array from end by k step;
#include <iostream>
using namespace std;
#include <vector>
// method-1 without an extra array
void rotate(vector<int> &vec, int k)
{
    k = k % vec.size();
    if (k == 0)
    {
        return;
    }
    for (int i = 0; i < k; i++)
    {
        int temp = vec[vec.size() - 1];
        for (int j = vec.size()-2; j >= 0; j--)
        {
            vec[j + 1] = vec[j];
        }
        vec[0] = temp;
    }
    return;
}

 
int main()
{
    vector<int> vec = {1, 3, 2, 4, 5, 0, 9};
    int step = 4;
    cout << "Before rotation: ";
    for (int ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl;
    rotate(vec, step);
    cout << "After rotation: ";
    for (int ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}