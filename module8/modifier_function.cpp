#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    // list<int>mylist={1,2,3,4};
    // mylist.push_back(5);
    // mylist.push_front(0);
    // mylist.pop_front();
    // mylist.pop_back();
    // mylist.assign(list2.begin(),list2.end());
    // mylist.insert(next(mylist.begin(),4),5);
    // mylist.erase(next(mylist.begin(),2));
    // replace(mylist.begin(),mylist.end(),30,100);
    // for(int v:mylist)
    // {
    //     cout<<v<<" ";
    // } 
    auto it=find(mylist.begin(),mylist.end(),50);
    if(it==mylist.end())
    {
        cout<<"not fund";
    }
    else
    {
        cout<<"fund";
    }

    return 0;
}