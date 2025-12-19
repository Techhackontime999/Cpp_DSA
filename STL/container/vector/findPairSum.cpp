#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> vec = {1, 2, 3, 8, 0, 6,9,4};
    int requiredSum=4;
    cout<<"All paired value for required sum "<<requiredSum<<".\n";
    for (int i = 0; i < vec.size(); i++)
    {
      for (int j = i+1; j < vec.size(); j++)
      {
        if (vec[i]+vec[j]==requiredSum)
        {
            cout<<"( "<<vec[i]<<" , "<<vec[j]<<" )"<<endl;
        }
        
      }
      
    }
    
    return 0;
}