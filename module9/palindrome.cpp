#include<bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode*next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Solution {
public:
    void insert_list(ListNode* &head,ListNode* &tail,int v)
    {
        ListNode* newnode=new ListNode(v);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void reverse(ListNode* &head,ListNode* cur)
    {
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
    }
    void print_list(ListNode *head)
    {
        ListNode* tmp=head;
        while (tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head=NULL;
        ListNode* tail=NULL;
        ListNode*tmp=head;
        while(tmp!=NULL)
        {
            insert_list(head,tail,tmp->val);
            tmp=tmp->next;
        }
        reverse(head,head);
        print_list(head);
        ListNode* tmp2=head;
        while(tmp!=NULL)
        {
            if(tmp->val!=tmp2->val)
            {
                return false;
            }
            tmp=tmp->next;
            tmp2=tmp->next;
        }
        return true;
    }
   
};