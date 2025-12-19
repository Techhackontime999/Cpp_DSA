#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<pair<int, string>> student;
    student.push_back({1, "ram"});
    student.push_back({2, "sohan"});
    student.push_back({3, "mohan"});  // here push back push pair objects
    student.emplace_back(4, "sumit"); // no need to make pair object emplace create emplace object first then push
    // emplace is faster than push
    //  for(auto val:student){
    //      cout<<val.first<<" "<<val.second<<endl;
    //  }
    for (pair<int,string> val : student)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}