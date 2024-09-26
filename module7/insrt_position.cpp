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
void insrt_position(node* head,int p,int v)
{
    node* newnode=new node(v);
    node* tmp=head;
    for(int i=1;i<p-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}
int size(node* head)
{
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insrt_head(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    head->next=newnode;
    newnode->prev=head;
    head=newnode;
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
  node* head=new node(10);
  node* a=new node(20);
  node* b=new node(30);
  node* c=new node(40);
  node* tail=c;

  head->next=a;
  a->prev=head;
  a->next=b;
  b->prev=a;
  b->next=c;
  c->prev=b;
  int p,v;
  cin>>p>>v;
  if(p>=size(head))
  {
    cout<<"invalid"<<"\n";
  }
  else if(p==0)
  {
    insrt_head(head,tail,v);
  }
  else if(p==size(head))
  {
    insrt_tail(head,tail,v);
  }
  else
  {
    insrt_position(head,p,v);
  }
  print_normal(head);
  print_revers(tail);


    return 0;
}