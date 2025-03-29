/*
where each element is assigned a priority & the element with the higher priority is dequeued first


*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q ; //maximum heap by defualt
    priority_queue<int , vector<int> , greater<int>> p; //min heap
    q.push(10);
    q.push(89);
    q.push(80);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top();
}