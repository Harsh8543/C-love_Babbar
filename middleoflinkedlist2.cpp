


// #include<iostream>
// using namespace std;

// Node* getMiddle(Node* head){
//     if(head==NULL ||head->next==NULL)
//     return head;

// //2 nodes
// if (head->next->next == NULL) {
//     return head->next;
// }

// Node*slow=head;
// Node* fast=head->next;

// while(fast!=NULL){
//     fast=fast->next;
//     if (fast != NULL) {
//       fast = fast->next;
//     }
//     slow = slow->next;
// }
// return slow;
// }

// int main(){
// Node*findMiddle(Node* head){
//     return getMiddle(head);
// }
// }