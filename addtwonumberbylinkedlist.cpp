// class Solution
// {
//     private:
//     Node* reverse(Node* head){
//         Node* curr=head;
//           Node* prev=NULL;
//             Node* next=NULL;
//     }
//     while(curr!= NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
    
//     void insertAtTail(struct Node* &head, struct Node* &tail,int val){
//         Node* temp=new Node(val);
//         //empty list
//         if(head==NULL){
//             head=temp;
//             tail=temp;
//             return;
//         }
// struct Node* add(struct Node* num1,struct Node* num2){
//     int carry=0;
//     Node* ansHead=NULL;
//     Node*ansTail=NULL;
//     while(num1!= NULL && num2!= NULL){
//         int sum=carry+num1->data+num2->data;
//         int digit = sum%10;
        
//         //creat node and add in answer linked list
//         insertAtTail(ansHead,ansTail,digit);
        
//         carry=sum/10;
//         num1=num1->next;
//         num2=num2->next;
//     }
//     while(num1!=NULL){
//         int sum=carry+num1->data;
//         int digit=sum%10;
//         //creat node and add in answer linked list
//         insertAtTail(ansHead,ansTail,digit);
//         carry=sum/10;
//         num1=num1->next;
    
//     }
//         while(num2!=NULL){
//         int sum=carry+num2->data;
//         int digit=sum%10;
//         //creat node and add in answer linked list
//         insertAtTail(ansHead,ansTail,digit);
//         carry=sum/10;
//         num1=num2->next;
    
//     }
//           while(carry!=0){
//         int sum=carry;
//         int digit=sum%10;
//         //creat node and add in answer linked list
//         insertAtTail(ansHead,ansTail,digit);
//         carry=sum/10;
       
    
//     }
    
 
//     return ansHead;
// }
//     }
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* num1, struct Node* num2)
//     {
//         int carry=0;
//         Node* ansHead=NULL;
//         Node* ansTail=NULL;
//         while(num1!= NULL)&& num2!= NULL
// {
//     int sum=carry+num1->data+num2->data;
//     int digit=sum%10;
//     //create node and add in answer linked list
//     insertAtTail(ansHead,ansTail,digit);
//     carry=sum/10;
// }        // step-> 1reverse input linklist
//         num1=reverse(num1);
//         num2=reverse(num2);
        
//         //step->2  add 2 LL
//         Node* ans=add(num1,num2);
        
//         //step 3
//         ans=reverse(ans);
        
//         return ans;
//     }
// };




// class Solution
// {
//     private:
//     Node* reverse(Node* head) {
        
//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;
        
//         while(curr != NULL) {
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
    
//     void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
//         Node* temp = new Node(val);
//         //empty list
//         if(head == NULL) {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
    
//     struct Node* add(struct Node* first, struct Node* second) {
//         int carry = 0;
        
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;
        
//         while(first != NULL || second != NULL || carry != 0) {
            
//             int val1 = 0;
//             if(first != NULL)
//                 val1 = first -> data;
                
//             int val2 = 0;
//             if(second !=NULL)
//                 val2 = second -> data;
            
            
//             int sum = carry + val1 + val2;
            
//             int digit = sum%10;
            
//             //create node and add in answer Linked List
//             insertAtTail(ansHead, ansTail, digit);
            
//             carry = sum/10;
//             if(first != NULL)
//                 first = first -> next;
            
//             if(second != NULL)
//                 second = second -> next;
//         }
//         return ansHead;
//     }
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         //step 1 -  reverse input LL
//         first = reverse(first);
//         second = reverse(second);
        
//         //step2 - add 2 LL
//         Node* ans = add(first, second);
        
//         //step 3 
//         ans = reverse(ans);
        
//         return ans;
//     }
// };





























