#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
  node a(0),b(0);
  cin>>a>>b;
  cout<<a.next->val<<" ";


    return 0;
}
