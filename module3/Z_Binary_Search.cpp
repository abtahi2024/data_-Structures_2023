#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    sort(a,a+n);
    while (q--)
    {
        int y;
        cin>>y;
        bool flag =false;
        int l=0,r=n-1;
        // for(int i=0;i<n;i++)
        while (l<=r)
        
        {
            int mid=(l+r)/2;
            if(a[mid]==y)
            {
                flag=true;
                break;
            }
            if(y>a[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    


    return 0;
}