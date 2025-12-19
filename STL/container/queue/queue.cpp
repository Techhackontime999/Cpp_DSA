#include<iostream>
using namespace std;
#include<queue>
//queue is work on fifo principle i.e first in first out
//first element is out first
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);
    q.emplace(7);
    // cout<<q.front()<<endl;//return first element of the queue
    // cout<<q.back()<<endl;//return last element of the queue
    queue<int> q2;
    // q2.swap(q);//copy element of q in q2
    // q2=q;//copy element of q in q2

    //printing element of queue
    // while (! q.empty())
    // {
    //   cout<<q.front()<<" ";
    //   q.pop();
    // }
    //printing q2
     while (! q2.empty())
    {
      cout<<q2.front()<<" ";
      q2.pop();
    }
    return 0;
}