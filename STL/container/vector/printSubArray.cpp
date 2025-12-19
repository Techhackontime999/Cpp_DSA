#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> vec={1,2,0,5,4,7};
    cout<<"subarray is given below.\n";
    for (int st = 0; st < vec.size(); st++)
    {
        for (int end = st; end < vec.size(); end++)
        {
           for (int i = st; i <= end; i++)
           {
            cout<<vec[i];
           }
           cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}