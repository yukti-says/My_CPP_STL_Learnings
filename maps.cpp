/*
stores data into key value pair in sorted order

*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>mp;
    mp[1] = "yukti";
    mp[2] = "sahu";
    for (auto i:mp){
      cout<<i.second<<" ";

    }
    mp.insert({3 , "anu"});
    mp.insert({4 , "sahu"});
    cout<<"\n map list is: ";
    for(auto i : mp)
    {
        cout<<i.second<<" ";
    }

}