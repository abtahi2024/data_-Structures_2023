#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q;
   cin>>n>>q;
//    vector<int>v(n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // while (q--)
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    

    return 0;
}