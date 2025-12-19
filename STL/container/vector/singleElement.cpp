#include<iostream>
#include<vector>
using namespace std;
int main(){
    // //find single if its negative duplicate present
    // vector<int> vec={4,3,5,-3,1,-5,-1};
    // int ans=0;
    // for (auto &&i : vec)//auto automatic understand container datattype
    // {
    //     ans=ans+i;
    // }
    // cout<<"Single element in array is: "<<ans<<endl;

    //find single if its positive duplicate present
    vector<int> vec={4,3,5,3,1,5,1};
    int ans=0;
    for (auto &&i : vec)//auto automatic understand container datattype
    {
        ans=ans^i;
    }
    cout<<"Single element in array is: "<<ans<<endl;
    
    return 0;
}
