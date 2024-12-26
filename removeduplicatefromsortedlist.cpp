// Node * removeDuplicates(Node *head)
// {
//     // empty list
//     if(head==NULL)
//     return NULL;

// //non empty list
// Node* curr= head;
// while(curr!=NULL){
// if((curr->next!=NULL)&& curr->data==curr->next->data)
// {
// Node* next_next=curr->next->next;
// Node* nodeToDelete=curr->next;
// delete(nodeToDelete);
// curr->next=next_next;
// } else {
// curr = curr->next;
// }
// }
// return head;
// }