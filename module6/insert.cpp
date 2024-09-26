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
void print_link(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert(node *head,int pos,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
int size(node* head)
{
    node *tmp=head;
    int cut=0;
    while(tmp!=NULL)
    {
        cut++;
        tmp->next->next;
    }
    return cut;
}
void insert_head(node* &head,int v)
{
    node* newnode=new node(v);
    newnode->next=head;
    head=newnode;
}
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
int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node*tail=c;
    head->next=a;
    a->next=b;
    b->next=c;
    print_link(head);
    cout<<tail->val<<endl;
    int pos,v;
    cin>>pos>>v;
    if(pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,v);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,v);
    }
    else
    {
        insert(head,pos,v);
    }
    // insert(head,1,100);
    print_link(head);
    cout<<tail->val<<endl;

    return 0;
}