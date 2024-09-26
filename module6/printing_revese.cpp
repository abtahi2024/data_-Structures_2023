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
void print_recvesion(node* n)
{
    if(n==NULL)
    return;
    cout<<n->next<<" ";
    print_recvesion(n->next);
}
int main()
{
    node* n=NULL;
    // node* tail=NULL;
    int v;
    while(true)
    {
      cin>>v;
      if(v== -1)
      {
        break;
      }
       print_recvesion(n);

    }


    return 0;
}