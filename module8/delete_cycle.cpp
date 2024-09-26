// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int val;
//     node*next;
//     node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int deletecycle(node* head)
// {
//     node* slow=head;
//     node* fast= head;
//     bool falg=false;
//     while(fast!=NULL&&fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow)
//         {
//             falg=true;
//             break;
//         }
//     }
//     return falg;
// }
// int main()
// {
//     node* head=NULL;
//     int n;
//     cin>>n;
//     if(n>0)
//     {
//         int v;
//         cin>>v;
//         node* newndoe=new node(v);
//         node *tmp=head;
//         for(int i=1;i<n;i++)
//         {
//             cin>>v;
//             tmp->next=new node(v);
//             tmp=tmp->next;
//         }
//         // tmp->next=head->next;
//     }
//     if(deletecycle(head))
//     {
//         cout<<"cycle";
//     }
//     else
//     {
//         cout<<"no cycle";
//     }


//     return 0;
// }

