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
void delete_list(node* head,int pos)
{
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    delete deletenode;
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
    int pos;
    if(pos==size(head))
    {
        cout<<"invalid";
    }
    else
    {
        delete_list(head,pos);
    }

    return 0;
}