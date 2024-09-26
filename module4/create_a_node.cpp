#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
};
int main()
{
    node a,b;
    cin>>a.val>>b.val;
    // a.val=10;
    // b.val=20;
    a.next=&b;
    b.next=NULL;
    cout<<a.next->val<<" ";


    return 0;
}