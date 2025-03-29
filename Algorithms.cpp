#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> //for accumulator
using namespace std;
int main()
{  
    vector<int> v = {23,3,4,0,1,-3};
    /*    //SORTING 
    cout<<"vector before sorting: ";
    for(int i : v)
    {
        cout<< i <<" ";
    }cout<<endl;
    sort(v.begin() , v.end());
    cout<<endl;
    cout<<"vector after sorting: ";
    for(int i : v)
    {
        cout<< i <<" ";
    }

    */
   /*
   //FIND: with iterator
   //auto : is a type deduction specifier that automatically detemines the type of a variable based one the value assigned to it at compile time
   auto it = find(v.begin() , v.end() , -30);
   if(it!=v.end())
   {
    cout<<"element found: "<<*it<<endl;

   }
   else
   {
    cout<<"element is not found: ";
   }
    */
   /*
   //ACCUMULATE() : sum of elements
   int sum = accumulate(v.begin() , v.end() , 0);
   cout<<" sum of elements: "<<sum<<endl;
   */

   //BINARY SEARCH
   vector<int> b = {1,11,111,234,456,10000};
   if(binary_search(b.begin() , b.end() , 234))
  {
    cout<<"element found";
  }
   else
   {
    cout<<"element not found";
   }
}