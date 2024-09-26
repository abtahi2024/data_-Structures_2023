#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,4,3,2,4,2};
    // replace(v.begin(),v.end()-1,2,10);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    // auto it=find(v.begin(),v.end(),2);
    vector<int>::iterator it=find(v.begin(),v.end(),2);
    if(it==v.end())
    {
        cout<<"not fund"<<" ";
    }
    else
    {
        cout<<"fund"<<" ";
    }
    cout<<*it;


   return 0;
}