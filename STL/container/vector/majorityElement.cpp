// the maximum frequency of an element in an array is known as majority element.or frequency>n/2 where n is the size of array
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// bruite force approch to find majority element which frequency >= n/2 timecomplexity  O(n*n)
//  int majorityElement(vector<int> vec)
//  {
//      int n = vec.size();
//      for (int i = 0; i < vec.size(); i++)
//      {
//          int freq = 0;
//          for (int j = 0; j < vec.size(); j++)
//          {
//              if (vec[i] == vec[j])
//              {
//                  freq++;
//              }
//          }
//          if (freq > (n / 2))
//          {
//              return vec[i];
//          }
//      }

//     return -1;
// }

// bruite force optimized approch to find majority element which frequency >= n/2 and array is sorted timecomplexity  O(nlogn)
// int majorityElement(vector<int> vec)
// {
    // sort(vec.begin(), vec.end()); // sort

//     int freq = 1, ans = vec[0];
//     for (int i = 1; i < vec.size(); i++)
//     {
//         if (vec[i] == vec[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = vec[i];
//         }
//         if (freq > vec.size() / 2)
//         {
//             return ans;
//         }
//     }
//     return -1;
// }

// moore's voting algorithm for find majority element which frequency >= n/2   timecomplexity 0(n)
// int majorityElement(vector<int> vec)
// {
//     int freq = 0, ans = 0;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         if (freq == 0)
//         {
//             ans = vec[i];
//         }
//         if (ans == vec[i])
//         {
//             freq++;
//         }
//         else
//         {
//             freq--;
//         }

//     }
//         return ans;
// }

// moore's voting algorithm variation which handle when majority element not present which frequency > n/2 then return -1
int majorityElement(vector<int> vec)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }
        if (ans == vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    //counter to check frequency of ans
    int count = 0;
    for (int val : vec)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > vec.size() / 2)
    {
        return ans;
    }
    return -1;
}
int main()
{
    // vector<int> vec = {1, 1, 2, 2, 3, 1, 1};
    // vector<int> vec = {1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 3};
    // sorted array

    // vector<int> vec = {0, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    //vector with no majority element
    vector<int> vec = {0, 1,2,3,4};

    int majele = majorityElement(vec);
    cout << "Majority element is: " << majele << endl;
    return 0;
}