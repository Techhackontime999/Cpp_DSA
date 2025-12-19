#include <iostream>
using namespace std;
#include <vector>
// method-01 bruite force where we use an extra of size m+n space to merge it. where m and n is the sorted array size.
// vector<int> merge(vector<int> A, int m, vector<int> B, int n) //time complexity O(m+n) and space O(m+n)
// {
//   vector<int> ans;
//   int i = 0;
//   int j = 0;
//   int idx = 0;
//   while (idx<m && idx<n)
//   {
//     if (A[i]<=B[j])
//     {
//      ans.push_back(A[i]);
//      i++;
//      idx++;
//     }else{
//       ans.push_back(B[j]);
//       j++;
//       idx++;
//     }

//   }
//  while (i<m)
//  {
//   ans.push_back(A[i]);
//   i++;
//  }
//  while (j<n)
//  {
//   ans.push_back(B[j]);
//   j++;
//  }
// return ans;
// }
// method-02 optimize where we merge both without using an extra array here we use two array which i need to merge size of first array is m+n and second is n.
// void merge(vector<int>& A, int m, vector<int>& B, int n){ //time complexity O(m+n) and space O(1).
//    int idx=m+n-1;
//    int i=m-1;
//    int j=n-1;
//    while (i>=0 && j>=0)
//    {
//      if (A[i]>=B[j])
//      {
//       A[idx]=A[i];
//       i--;
//       idx--;
//      }else{
//       A[idx]=B[j];
//       j--;
//       idx--;
//      }

//    }

// }

// method-03
void merge(vector<int> &A, int m, vector<int> &B, int n)
{ // time complexity O(m+n) and space O(1).
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (B[i] < A[j])
      {
        int temp = B[i];
        B[i] = A[j];
        A[j] = temp;
      }
    }
  }
  int idx = m;
  for (int i = n-1; i >=0; i--)
  {
    A[idx]=B[i];
    idx++;
  }
  

}
int main()
{
  // method-01
  // vector<int> a = {0, 1, 2, 3};
  // vector<int> b = { 2,3,4, 5, 6, 7};
  // int m = 4, n = 6;
  // vector<int> arr = merge(a, m, b, n);
  // for(int ele:arr){
  //   cout<<ele<<" ";
  // }
  // cout<<endl;
  // method-02
  vector<int> a = {0, 1, 2, 3, 0, 0, 0, 0, 0};
  vector<int> b = {2, 3, 5, 6, 7};
  int m = 4;
  int n = 5;
  merge(a, m, b, n);
  for (int ele : a)
  {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}