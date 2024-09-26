#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push(x);
    } 
    while(!v.empty())
    {
        cout<<v.top()<<endl;
        v.pop();
    }


    return 0;
}