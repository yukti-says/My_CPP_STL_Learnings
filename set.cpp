/*
do not hold same values(duplicate)
stores unique data
useed for finding elements
prints data into sorted order



*/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(78);
    s.insert(2);
    s.insert(11);
    s.insert(188);
    //printing the set
    cout<<"set is: ";
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(11);
    cout<<"set is: ";
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"first element: "<<*s.begin();
    //for finding something
    s.find(2);
    cout<<s.count(78);
    
}
