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
void delete_position(node* head,int p)
{
    node* tmp=head;
    for(int i=1;i<=p-1;i++)
    {
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
}
void delete_tail(node* &tail)
{
    node* deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    tail->next=NULL;
}
void delete_head(node* &head)
{
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    head->prev=NULL;
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
  int p;
  cin>>p;
// delete_tail(tail);
// delete_head(head);
  if(p>=size(head))
  {
    cout<<"Invaid"<<endl;
  }
  else if(p==0)
  {
    delete_head(head);
  }
  if(p==size(head)-1)
  {
    delete_tail(tail);
  }
  else
  {
  delete_position(head,p);
  }
  print_normal(head);
  print_revers(tail);


    return 0;
}