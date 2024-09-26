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
void insert_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_link(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
  node* head=NULL;
  node* tail=NULL;
  int v;
  while(true)
  {
    cin>>v;
    if(v== -1)
    {
        break;
    }
    insert_tail(head,tail,v);
  }
  print_link(head);



    return 0;
}