#include <iostream>
#include <vector>
#include <limitS.h>
using namespace std;
int main()
{
    vector<int> vec = {-1, -2, -9, 5, -4, -7};
    cout << "subarray is given below.\n";
    // method-01 bruite force approach O(n*n*n) complexity
    //  int loopcount=0;
    //  int maxSum=INT_MIN,curSum;
    //  for (int st = 0; st < vec.size(); st++)
    //  {
    //      for (int end = st; end < vec.size(); end++)
    //      {
    //          curSum=0;
    //         for (int i = st; i <= end; i++)
    //         {
    //          curSum=curSum+vec[i];
    //          loopcount++;//for checking complexity

    //         }
    //         maxSum=max(curSum,maxSum);
    //      }
    //  }

    // method-02 bruit force approach O(n*n) complexity
    // int loopcount=0;
    // int maxSum = INT_MIN, curSum;
    // for (int st = 0; st < vec.size(); st++)
    // {
    //     curSum=0;
    //     for (int end = st; end < vec.size(); end++)
    //     {
    //         curSum = curSum+vec[end];

    //         maxSum = max(curSum, maxSum);
    //          loopcount++;//for checking complexity
    //     }
    // }

    // method-03 most optimised approach kadane's algorithm using dp  O(n) complexity
    int loopcount = 0;
    int maxSum = INT_MIN, curSum = 0;
    for (int i = 0; i < vec.size(); i++)
    {

        curSum = curSum + vec[i];

        maxSum = max(curSum, maxSum);//it calculate maxsum at leeast one also when cursum is negative
        if (curSum < 0)
        {
            curSum = 0;
        }
        loopcount++; // for checking complexity
    }



    cout << "maximum subarray sum is: " << maxSum << endl
         << "Time to find: " << loopcount << endl;
    return 0;
}