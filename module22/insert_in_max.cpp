#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int cur=v.size()-1;
        while (cur!=0)
        {
            int p=(cur-1)/2;
            if(v[p]<v[cur])
            {
                swap(v[p],v[cur]);
            }
            else
            break;
            cur=p;
        }
       
        
    }

    for(int N:v)
        {
            cout<<N<<" ";
        }
    
  


    return 0;
}