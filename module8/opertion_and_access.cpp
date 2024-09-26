#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,20,10,50};
   
    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    // mylist.reverse();
    // for(int v:mylist)
    // {
    //     cout<<v<<" ";
    // }
    // cout<<mylist.front()<<" ";
    // cout<<mylist.back()<<" ";
    cout<<*next(mylist.begin(),3)<<" ";


   return 0;
}