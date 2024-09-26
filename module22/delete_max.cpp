#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
{
    v.push_back(x);
     int cur=v.size()-1;
        while (cur!=0)
        {
            int p=(cur-1)/2;
            if(v[p]>v[cur])
            {
                swap(v[p],v[cur]);
            }
            else
            break;
            cur=p;
        }
}
void delete_max(vector<int>& v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int c=0;
    while (true)
    {
        int left=c*2+1;
        int right=c*2+2;
        int l=v.size()-1;
        if(left<=l&&right<=l)
        {
            if(v[left]>=v[right] && v[left]>=v[c])
            {
                swap(v[left],v[c]);
                c=left;
            }
            else if(v[right]>=v[left]&&v[right]>v[c])
            {
                swap(v[right],v[c]);
                c=right;
            }
            else
                break;
        }
        else if(right<=l)
        {
            if(v[right]>v[c])
            {
                swap(v[right],v[c]);
                c=right;
            }
            else
                break;
        }
        else 
            break;
    }
    
}
void print_(vector<int>v)
{
    for(int val:v)
    {
        cout<<val<<" "<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    delete_max(v);
    print_(v);


    return 0;
}