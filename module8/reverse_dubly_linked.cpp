#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*prev;
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
void print_reverse(node* tail)
{
    node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
void insert_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(tail==NULL)
    {
        head=tail=newnode;
        
        // return;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
  
}
void reverse_dub(node* head,node* tail)
{
    node* i=head;
    node* j=head;
    while (i!=j&&i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
    
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        insert_tail(head,tail,v);
    }
    print_normal(head);
    reverse_dub(head,tail);
    // print_reverse(tail);
    return 0;
}
