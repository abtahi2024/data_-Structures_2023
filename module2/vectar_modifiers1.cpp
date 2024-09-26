#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={1,2,3,4,5};
    vector<int>x={10,20,30,40};
    // x=v;
    x.pop_back();
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }


   return 0;
}