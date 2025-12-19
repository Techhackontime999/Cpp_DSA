// in this problem we have to return an ans array from main array arr in which element at index is the product of element of arr except element at that index.
// i.e arr={1,2,3,4} ans array is also of same length
// ans ={24,12,8,6} where ans[0]=arr[1]*arr[2]*arr[3] and ans[1]=arr[0]*arr[2]*arr[3] ans so on..
#include <iostream>
using namespace std;
#include <vector>
// bruite force approch with o(n*n) time complexity
// vector<int> ansArr(vector<int> arr)
// {
//     vector<int> ans(arr.size(), 1);
//     int i = 0, j;
//     while (i < arr.size())
//     {
//         j = 0;
//         while (j < arr.size())
//         {
//             if (i != j)
//             {
//                 ans[i] *= arr[j];
//             }

//             j++;
//         }
//         i++;
//     }

//     return ans;
// }

// bruit force optimized approch with o(n) time complexity
//  vector<int> ansArr(vector<int> arr)
//  {
//      vector<int> ans;
//      int maxMul=1;
//      int val;
//      //total 2n times means O(n) time complexity
//      for (int i = 0; i < arr.size(); i++) //n times
//      {
//         maxMul*=arr[i];
//      }
//      for (int i = 0; i < arr.size(); i++) //n times
//      {
//          val=maxMul/arr[i];
//          ans.push_back(val);
//      }

//     return ans;
// }
// when we have no permission to use division operator and need o(1) space complexity and O(n) time complexity we want in upper first method we done it in O(n*n) time complexity but space and time complexity not meet with the requirenment. and not add ans array in space complexity.
// first optimize approach where we use time complexity O(n) and space complexity O(n)
// vector<int> ansArr(vector<int> arr)
// {
//   vector<int> ans(arr.size(), 1);
//   vector<int> prefix(arr.size(), 1);
//   vector<int> suffix(arr.size(), 1);
//   // prefix
//   for (int i = 1; i < arr.size(); i++)
//   {
//     prefix[i] = prefix[i - 1] * arr[i - 1];
//   }
//   // suffix
//   for (int i= arr.size()-2; i >= 0; i--)
//   {
//     suffix[i] = suffix[i + 1] * arr[i + 1];
//   }
//   // ans
//   for (int i = 0; i < arr.size(); i++)
//   {
//     ans[i] = prefix[i] * suffix[i];
//   }

//   return ans;
// }
// second optimize approach where we use time complexity O(n) and space complexity O(1)
vector<int> ansArr(vector<int> arr)
{
  vector<int> ans(arr.size(), 1);
  //prefix calculated directly in answer array
  for (int i = 1; i < arr.size(); i++)
  {
    ans[i]=ans[i-1]*arr[i-1];
  }
  // suffix
  int suffix=1;
  for (int i= arr.size()-2; i >= 0; i--)
  {
    suffix *= arr[i + 1];
    ans[i] *= suffix;//here prefix present in ans array is multiply with suffix 
  }
  return ans;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4};
  // vector<int> arr = {2, 6, 5, 4};

  vector<int> ans = ansArr(arr);
  cout << "Printing answer array..." << endl;
  for (int element : ans)
  {
    cout << element << " ";
  }
  cout << endl;
  return 0;
}