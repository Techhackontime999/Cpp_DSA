#include<iostream>
using namespace std;
//infinite function call in recursion or recursion depth
void say(){
    cout<<"Hello"<<endl;
    say();
}
int main(){
    say();
    return 0;
}