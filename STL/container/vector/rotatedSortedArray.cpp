// in this problem we have to find index of target element from a rotated sorted array
// when i rotate a sorted array by k step from end then its become a rotated sorted array
// sorted array: 0,1,2,3,4,5,6,7
// rrotated sorted array: 3,4,5,6,7,0,1,2
// we have to find target index ex: tar=0 in O(logn) time complexity
#include <iostream>
using namespace std;
#include <vector>
int rotatedSortedArray(vector<int> arr, int target)
{
    // here we use modified binary search algorithm to gain time complexity O(logn)
    int st = 0;
    int end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[st] <= arr[mid]) // left sorted
        {
            if (arr[st] <= target && target <= arr[mid]) // target lie in left
            {
                end = mid - 1;
            }
            else
            { // target lie in right
                st = mid + 1;
            }
        }
        else// right sorted
        {                                                 
            if (arr[mid] <= target && target <= arr[end]) // target lie in right
            {
                st = mid + 1;
            }
            else
            { // target lie in left
                end = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = rotatedSortedArray(arr, target);
    cout << "Target " << target << " is found at index: " << result << endl;
    // exit(0);//return 0
    return 0;
}