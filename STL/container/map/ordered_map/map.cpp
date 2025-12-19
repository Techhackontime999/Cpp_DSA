#include<iostream>
using namespace std;
#include<map>
int main(){
    map<string,int> dict;
    dict.emplace("ram",1);
    dict.emplace("raja",2);
    dict.emplace("sohan",3);
    dict.emplace("amit",4);
    for(auto val:dict){
        cout<<val.first<<" "<<val.second<<endl;
    }
    // cout<< *(dict.find("raja"))<<endl;
    return 0;
}