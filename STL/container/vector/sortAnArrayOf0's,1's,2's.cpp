#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// Sort colors
// given an array nums with n objects colored red,white,or blue , sort them in-place so that
// objects of the same color are adjacent , with the colors in the order red, white and blue.
// we will use the integers 0,1 and 2 to represent the color red,white and blue respectively.
// you must solve this problem without using the library sort function.

// there are three approach to solve this problem
//  1.bruite force
//  2.optimized
//  3.optimal
// method-01 using library funtion sort
// void sortColors(vector<int>& nums) //time colplexity O(logn)
// {
//     sort(nums.begin(), nums.end());
// }
// method-02
// void sortColors(vector<int> &nums) // time colplexity O(n) and using 2 no of passes on nums array
// {
//     int count0 = 0, count1 = 0, count2 = 0;
//     for (int i = 0; i < nums.size(); i++) // time coplexity O(n)
//     {
//         if (nums[i] == 0)
//             count0++;
//         else if (nums[i] == 1)
//             count1++;
//         else
//             count2++;
//     }

//     // below loops total time coplexity O(n)
//     int idx = 0;
//     for (int i = 0; i < count0; i++)
//     {
//         nums[idx] = 0;
//         idx++;
//     }
//     for (int i = 0; i < count1; i++)
//     {
//         nums[idx] = 1;
//         idx++;
//     }
//     for (int i = 0; i < count2; i++)
//     {
//         nums[idx] = 2;
//         idx++;
//     }
// }

// method-03 optimal approach called Dutch National flag Algorithm
void sortColors(vector<int> &nums) // time colplexity O(n) and using 1 no or single passes on nums array
{
    //think like a chair of size n where n people can seat .initialy it is unsorted we want to sort it. like exe: we take 3 people 0,1,2 which need to sort 0 people can seat initialy in range 0 to low-1 and 1 people can seat at the middle of 0 and 2 in range low to mid-1 and unsorted part where already seated people in range mid to high and 2 people can seat at last in range high+1 to n-1 .
    //we need to compress unsorted part one by one and this space is use to allocate it at right place i.e compress unsorted part and extend sorted part when exact match available. here we logicaly partition it.
    // 0 low-1 sorted 0 part
    // low mid-1  sorted 1 part
    // mid high unsorted part where nums is present
    // high+1 n-1  sorted 2 part

    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}
int main()
{
    // sort 0,1,2 where 0,1,2 defining the colors
    vector<int> nums = {0, 0, 1, 2, 0, 1, 2, 2,0};
    sortColors(nums);
    for (int ele : nums)
    {
        cout << ele << " ";
    }

    return 0;
}