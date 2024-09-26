#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    // cout<<mylist.size();
    cout<<mylist.max_size()<<endl;
    // mylist.clear();
    // mylist.empty();
    mylist.resize(5,50);
    for(int v:mylist)
    {
        cout<<v<<" ";
    } 


    return 0;
}