#include <iostream>
using namespace std;
#include <vector>
// iterative method time complexity is O(logn) and space complexity is O(1)
// int binarySearch(vector<int> arr, int element)
// {
//     int start = 0, end = arr.size() - 1;
//     int mid;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         else if (arr[mid] > element)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }
// recurcive approach time complexity is O(logn) and space complexity is also O(logn) because in recursive approach call stack take memory for logn calls. so iterative is better than recurssive approach
// int binarySearch(vector<int> arr, int element, int start, int end)
// {

//     int mid = (start + end) / 2;
//     if (start <= end)
//     {

//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         else if (arr[mid] > element)
//         {

//             return binarySearch(arr, element, start, mid - 1);
//         }
//         else
//         {
//             return binarySearch(arr, element, mid + 1, end);
//         }
//     }

//     return -1;
// }

//binary search optimization to prevent from overflow when calculating mid using formull mid=(start+end)/2
int binarySearch(vector<int> arr, int element)
{
    int start = 0, end = arr.size() - 1;
    int mid;
    while (start <= end)
    {
        //here when start and end is maximum integer i.e ~ INT_MAX then mid couse the overflow issue because of range here mid is also integer
        // mid = (start + end) / 2; 
        //use below formulla instead to prevent from overflow
        mid= start + (end-start)/2;
         //both gives the same result but here right term reduce the value and then add with start not cause the overflow issue.
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0, 1, 3, 4, 6, 7, 8, 10};
    int element = 4;
    // iterative
     int result = binarySearch(arr, element);
    // recurssive
    // int result = binarySearch(arr, element, 0, arr.size() - 1);

    cout << element << " is found at index: " << result << endl;

    return 0;
}
