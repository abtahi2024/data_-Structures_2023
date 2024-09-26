#include<bits/stdc++.h>
using namespace std;
// class node
// {
//     public:
//     int val;
//     node*next;
//     node*prev;
//     node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
class myQueue
{
    public:
    // node* head=NULL;
    // node* tail=NULL;
    // int sz=0;
    list<int>l;
    void push(int v)
    {
        l.push_back(v);
        // sz++;
        // node* newnode=new node(v);
        // if(head==NULL)
        // {
        //     head=newnode;
        //     tail=newnode;
        //     return ;
        // }
        // tail->next=newnode;
        // newnode->prev=tail;
        // tail=tail->next;
    }
    void pop()
    {
        l.pop_front();
        // sz--;
        // node* deletenode=head;
        // head=head->next;
        // delete deletenode;
        // if(head==NULL)
        // {
        //     tail=NULL;
        //     delete deletenode;
        //     return;
        // }
        // head->prev=NULL;
        // delete deletenode;
    }
    int front()
    {
        // return head->val;
        return l.front();
    }
    
    int size()
    {
        // return sz;
        return l.size();
    }
    bool empty()
    {
    //     if(sz==0)
    //     {
    //         return true;
    //     }
    //     else 
    //     {
    //         return false;
    //     }
    return l.empty();
    }

};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x); 
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        // cout<<q.front()<<" ";
        q.pop();
    }
    if(!q.empty())
    {
        cout<<q.front();
    }


    return 0;
}