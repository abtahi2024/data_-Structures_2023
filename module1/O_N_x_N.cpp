#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<"hello"<<endl;
    //     }

    // }  
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i>j)
            {
            // swap(i,j);   
            int tmp =i;
            i=j;
            j=tmp;    
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        cout<<i<<endl;
    }


   return 0;
}