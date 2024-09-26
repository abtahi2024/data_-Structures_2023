#include<bits/stdc++.h>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// bool detectCycle(node* head) {
//     node* slow = head;
//     node* fast = head;
//     bool flag = false;
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (fast == slow) {
//             flag = true;
//             break;
//         }
//     }
//     return flag;
// }

// int main() {
//     node* head = NULL;
//     int n;
//     cin >> n;
//     if (n > 0) {
//         int v;
//         cin >> v;
//         head = new node(v);
//         node* tmp = head;
//         for (int i = 1; i < n; i++) {
//             cin >> v;
//             tmp->next = new node(v);
//             tmp = tmp->next;
//         }
//         // Uncomment the next line if you want to create a cycle (for testing)
//         // tmp->next = head->next;
//     }
//     if (detectCycle(head)) {
//         cout << "Cycle detected";
//     } else {
//         cout << "No cycle";
//     }

//     return 0;
// }