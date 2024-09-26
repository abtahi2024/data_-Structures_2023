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
void insret(node* &head,int v)
{
    node *newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<endl<<"inserted at tail: "<<endl<<endl;
    
}
void print_list(node *head)
{
    cout<<endl;
    cout<<"you linkd list:";
    node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_position(node* head,int pos,int v)
{
    node* newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"inserted at position: "<<pos<<endl;
}
int main()
{
    node *head=NULL;
    while (true)
    {
        cout<<"option 1:insert at tail:"<<endl;
        cout<<"option 2:print link list:"<<endl;
        cout<<"option 3:insert any position:"<<endl;
        cout<<"option 4:terminate:"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"plese enter value:";
            int v;
            cin>>v;
            inserter(head,v);
        }
         else if(op==2)
        {
          print_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"enter position: ";
            cin>>pos;
            cout<<"enter value: ";
            cin>>v;
            insert_position(head,pos,v);
        }
        else if(op==4)
        {
            break;
        }
    }
   
    return 0;
}