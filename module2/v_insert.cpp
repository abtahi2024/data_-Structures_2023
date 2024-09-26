#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4};
    vector<int>c={10,20,30,40};
    // v.insert(v.begin()+3,20);
    v.insert(v.begin()+4,c.begin(),c.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }


    return 0;
}