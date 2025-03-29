/*
stl is a set of ready to use template  classes and functions
container ->store data
algorithms ->perform operations on data
iterators ->Access elements from containers
utilities/functions ->provide helper functions

*/
#include<iostream>
#include<vector>
using namespace std;

int add(vector<int> v , int size)
{   int sum = 0;
    for(int i = 0;i<size;i++)
    {   sum = sum+v[i];
       
    }
    return sum;
}

int main()
{
    /*
    sequence containers: arrays , vectors , list , deque[stores data in linear fashion]
    associative containers:set/multiset/unorder set , map , unordered map[store data in a sorted/unorder manner]
    container adapters: stacks , queue , priority queue[provide different interfaces to sequential containers]
    */

    //VECTOR CONTAINERS:dynamic,random access,automatic resizing
    //empty vector
        vector<int>v;
        //initialize vector
        vector<int>v1(5 , 10); //size is 5 and values will be 10
        //copying in another vector
        vector<int>c(v1.begin() , v1.end());

        //print vector
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
        for(int i : v1)
            cout<<i<<" ";
        cout<<endl;
        for(int i : c) //int i belongs to c read in this way
            cout<<i<<" ";
        //check size[total current elements in] and capacity[capacity to hold maximum values]
        cout<<"size of vector v: "<<v.size()<<endl;
        cout<<"size of vector v1: "<<v1.size()<<endl;
        cout<<"capacity of vector v1: "<<v1.capacity()<<endl;
        //push elements in vector
        v.push_back(3);
        v1.push_back(4);
        cout<<"size of vector v: "<<v.size()<<endl;
        cout<<"size of vector v1: "<<v1.size()<<endl;
        cout<<"capacity of vector v1: "<<v1.capacity()<<endl;
        //pop elements
        v.pop_back();
        //insert at any index
        v1.insert(v1.begin()+2 , 11); // 0th , 1th , 2nd index pe 11
        cout<<endl;
         for(int i : v1)
            cout<<i<<" ";
        //erase delete any value at any index
        v1.erase(v1.begin()+2);
         cout<<endl;
         for(int i : v1)
            cout<<i<<" ";
        //for clearing all elements use
        //v1.clear();
        //resize to 3 elements
        v1.resize(3);
        cout<<"size of v1: "<<v1.size();
         cout<<endl;
         cout<<"elements in it: ";
         for(int i : v1)
            cout<<i<<" ";
         //another way to initialize
         vector<int> y = {10,20,30,40,50};
         cout<<endl;
         cout<<"elements in y: ";
         for(int i : y)
            cout<<i<<" ";
        //finding sum of this vector elements
        int s = y.size();
        int result = add(y  , s);
        cout<<"\nsum of elements is: "<<result;



}
