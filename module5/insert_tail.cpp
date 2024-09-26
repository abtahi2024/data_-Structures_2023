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
    
}
void print_list(node *head)
{
    // cout<<"you linkd list:";
    node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=NULL;
    while (true)
    {
        // cout<<"option 1:insert at tail:"<<endl;
        // cout<<"option 2:print link list:"<<endl;
        // cout<<"option 3:terminate:"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            // cout<<"plese enter value:";
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
            break;
        }
    }
    // print_list(head);
   
    return 0;
}