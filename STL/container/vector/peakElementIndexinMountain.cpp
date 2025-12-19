// in this problem we have to find the index of element which have peak value in array or mountain
// exe: 3,2,9,0,1 if he is a mountain 9 is at peak and its index is 2
// we have to solve this problem in O(logn) time complexity
#include <iostream>
using namespace std;
#include <vector>
int findPeakElementfromMountain(vector<int> arr)
{
    int st = 1, end = arr.size() - 2;
    //element at index 0 and n-1 not be a peak element
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // its help to tackle overflow also
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1]) // right
        {
            st = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }

    return -1;
}
int main()
{
    // here element in arrange in order where element left side from peak is arranged in increasing order and right side from peak is arranged in decreasing order.
    //at least arr size is 3 for guantee to persent peak element
    vector<int> arr = {2, 3, 15, 9, 1, 0};
    int res = findPeakElementfromMountain(arr);
    cout << "Element " << arr[res] << " at index " << res << " is at peak on the mountain." << endl;
    return 0;
}