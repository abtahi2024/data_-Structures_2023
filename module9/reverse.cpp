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
ListNode* reverselist(ListNode * head)
{
    if(head==NULL)
    {
        return head;
    }
    reverse(head,head);
    return head;
}