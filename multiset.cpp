/*

similar but allows duplicate data as well
*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
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
    s.insert(2);
    s.insert(78);
    s.insert(89);
    s.insert(78);
    s.insert(0);
    cout<<"multi set is: ";
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
