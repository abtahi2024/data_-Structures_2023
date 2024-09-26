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
void deleteNode(ListNode* head)
{
    head->val=head->next->val;
    ListNode* deleteNode=head->next;
    head->next=head->next->next;
    delete deleteNode;
}