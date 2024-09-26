#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_normal(node* head)
{
    node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void print_revers(node* tail)
{
    node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
void insrt_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
int main()
{
  node* head=NULL;
  node* tail=NULL;
  int v;
  while (true)
  {
    cin>>v;
    if(v== -1)
    {
        break;
    }
    insrt_tail(head,tail,v);
  }
//   print_normal(head);
  print_revers(tail);


    return 0;
}