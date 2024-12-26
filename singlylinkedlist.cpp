
// // Node--------->which contains the data and the addressof the next node
// // syntax-->

// // class linkedlistNode{
// //     public:
// //     int data;
// //     linkedlistNode* next;
// // };

// //  int main(){
// //   linkedlistNode* node1=new Node();
// // cout<<node1 -> data<<endl;        // esase ham node1 ke andar padi data ko print kar rahe hai jo ki abhi koi value nahi hai to garbeg value padi hai
// //   cout<<node1->next<<endl;        //esase ham ye pata kar rahe hai ki print karo next node ke address ko
// //}
// //insert at tail---> ending node ke aage new node add karega 

// // tail----> pointer of the node type or last node ko darshayega




// // *****************  INSERTION OF THE LINKED LIST  **************


#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor     //esase jab bhi mai new Node (kyuki jab bhi new Node creat hota hai to uska constructor call hota hai)karu to mai usko create kar paauu esi liye ham new Node ka constructor likh rahe hai
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //distructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<  value <<endl;
    }
};
void insertAtHead(Node* &head, int d)       // hamare dimag me ek question aayega ki hame ya head se pahle (&) eski jarurat kyu padi kyuki ham ya copy nahi banana chahate hai balki ham original linked list ke anadar hi ham change karna chahate hai 
{
    // new node creat
    Node *temp = new Node(d);      //upar jo (int d likha hai uska matlab hai ki jab bhi nayi data aati hai to ham ) New node ko creat karte hai
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    //new node creat
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node *&head)      // this is used to  traverse the linked list
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(Node* & tail,Node* & head,int position,int d){
//insert at starting
    if(position==1){       //pahle position par insert karne ke liye
        insertAtHead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail ,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(int position,Node* & head){
    //deleting first or start node
    if(position == 1){
Node* temp=head;
    head=head->next;
    //memory free start node
    temp->next =NULL;
    delete temp;
    }
    else{
//deleting my middle node and the last node
Node* curr=head;
Node* prev=NULL;

int cnt=1;
while(cnt < position){
    prev = curr;
    curr=curr->next;
    cnt++;
}
prev->next=curr -> next;
curr->next = NULL;
delete curr;
    }
}
int main()
{
    // created a new node

    Node *node1 = new Node(10);
    cout << node1->data << endl;
    // cout << node1->next << endl;


    // head pointed to node1

    Node *head = node1;       // insert at head se kaya hoga ki hamesha insertion jo hai wah node ke aage hoga 
    Node* tail=node1;         //insertion at tail se kaya hog ki hamesha insertion jo hoga wo node ke piche hoga
    // print (head);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,15);
    // print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    deleteNode(3,head);
    print (head);
     cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}


// // *********************INSERTION AND DELETION OF THE LINKED LIST***********************

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     // constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     //Distructor
//     ~Node(){
//         int value = this-> data;
//         //MEMORY FREE
//         if(this->next !=NULL){
//             delete next;
//             this->next = NULL;
//         }
// cout<<"memory is free for node with data "<<value<<endl;
//     }
// };
// void insertAtHead(Node *&head, int d)
// {
//     // new node creat
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail,int d){
//     //new node creat
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void insertAtPosition(Node* & tail,Node* & head,int position,int d){
// //insert at starting
//     if(position==1){
//         insertAtHead(head,d);
//         return;
//     }
//     Node*temp=head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     //inserting at last position
//     if(temp->next==NULL){
//         insertAtTail(tail ,d);
//         return;
//     }
//     //creating a node for d
//     Node* nodeToInsert=new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;
// }
// void deleteNode(int position,Node* & head){
//     //deleting first or start node
//     //pahale node ko hame alag tarike se handle karna hai kyuki eska previous pointer null hota hai
//     if(position==1){
//         Node* temp =head;
//         head=head->next;
//         //memory free start node
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         //deleting any middle node or last node
//         Node* curr=head;
//         Node* prev=NULL;

//         int cnt=1;
//         while(cnt< position){
//             prev=curr;
//             curr=curr-> next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         curr-> next=NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     // created a new node
//     Node *node1 = new Node(10);
//     // cout << node1->data << endl;
//     // cout << node1->next << endl;

//     // head pointed to node1
//     Node *head = node1;
//     Node* tail=node1;
//     print(head);
//     insertAtTail(tail, 12);

//     // insertTail(head,12);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head);

//     insertAtPosition(tail,head,4,22);
//     print(head);

//     cout<<"Head "<<head->data<<endl;
//     cout<<"Tail "<<tail->data<<endl;
//     deleteNode(3,head);
//     print(head);
//     return 0;
// }




























































