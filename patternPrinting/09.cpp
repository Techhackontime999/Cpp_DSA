#include<iostream>
using namespace std;
int main(){
    for (int i = 4; i > 0; i--)
    {
       for (int j = 0; j < i  ; j++)
       {
        cout<<"  "<<char(j+65)<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}