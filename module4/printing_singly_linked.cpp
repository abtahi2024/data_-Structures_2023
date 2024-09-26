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
  node*hade=new node(10);
  node*a=new node(20);
  node*b=new node(30);
  node*c=new node(40);
  hade->next=a;
  a->next=b;
  b->next=c;
  node* tmp=hade;
  while (tmp!=NULL)
  {
    cout<<tmp->val<<endl;
    tmp=tmp->next;
  }
  

    return 0;
}