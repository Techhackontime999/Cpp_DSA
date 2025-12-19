// in this problem we have given an array in which all elements duplicate available except one . we need to find that single element in O(logn) time complexity because array is sorted here
// it is also solved using linear search method or using bitwise xor or but not use here we need O(logn)
// exe: arr is: 2,2,3,4,4,7,7   here single element = 3
#include <iostream>
using namespace std;
#include <vector>
int singleNonDuplicate(vector<int> vec)
{
    int st = 0, end = vec.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] != vec[mid - 1] && vec[mid] != vec[mid + 1])
            return vec[mid];
        if ((mid == 0 && vec[mid] != vec[mid + 1]) || (mid == vec.size() - 1 && vec[mid] != vec[mid - 1]))
            return vec[mid];
        if (mid % 2 == 0)
        { // even (both side of mid have even no of element)
            if (vec[mid] == vec[mid - 1])
            { // left
                end=mid-1;
            }
            else
            { // right
                st=mid+1;
            }
        }
        else
        { // odd (both side of mid have odd no of element)
            if (vec[mid] == vec[mid - 1])
            { // right
                st=mid+1;
            }
            else
            { // left
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {2, 2, 3,3, 4, 4, 9};
    int res = singleNonDuplicate(vec);
    cout << "Single element in array is: " << res << endl;

    return 0;
}