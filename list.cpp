/*
bidirectional linked list
no random access 
better insertion and deletion 
aka-> doubly linked list


*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l = {2,3,4,5,4};
    cout<<"list is: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(90);
    l.push_front(100);
    //l.pop_back();
   // l.pop_front();
    cout<<"list is: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //reverse list
    l.reverse();
    cout<<"list is: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}