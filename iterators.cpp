/*
it points to elements in container


*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v ={12,13,14,15,16};
    vector<int> :: iterator i;
    for( i =v.begin();i!=v.end();i++)
    {
        cout<< *i <<" ";
    }
}