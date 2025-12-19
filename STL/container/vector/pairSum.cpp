#include <iostream>
using namespace std;
#include <vector>
// bruite forece approach to find pair sum
//  vector<int> pairSum(vector<int> vec,int requiredSum )
//  {
//      vector<int> ans;
//      for (int i = 0; i < vec.size(); i++)
//      {
//          for (int j = i + 1; j < vec.size(); j++)
//          {
//              if (vec[i] + vec[j] == requiredSum)
//              {
//                  ans.push_back(vec[i]);
//                  ans.push_back(vec[j]);
//                  return ans;
//              }
//          }
//      }
//  }

// bruite forece optimized approach to find pair sum when array is sorted using 2 pointer
vector<int> pairSum(vector<int> vec, int requiredSum)
{
    vector<int> ans;
    int i=0,j=vec.size()-1;
   
    
    while (i<j)
    {
        if (vec[i]+vec[j] < requiredSum)
        {
            i++;
        }
        else if (vec[i]+vec[j] > requiredSum)
        {
            j--;
        }
        else{
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;

        }
        
        
    }
    
}
int main()
{
    // when array is not sorted
    //  vector<int> vec = {1, 2, 3, 8, 0, 6, 9, 4};
    // when array is not sorted
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6};

    int requiredSum = 10;
    vector<int> ans = pairSum(vec, requiredSum);
    cout << "Pair value for required sum " << requiredSum << " = " << "( " << ans[0] << " , " << ans[1] << " )" << endl;
    return 0;
}