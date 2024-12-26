#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  // constructor
  Node(int d)
  {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node(){
    int val = this->data;
    if(next != NULL){
      delete next;
      next=NULL;
    }
    cout<<"memory free for node data"<<val<<endl;
  }
};
// traversing a linked list
void print(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
// gives the length of the linked list
int getlength(Node *head)
{
  int len = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}
void insertAtHead(Node* &tail, Node* &head, int d){
  if(head == NULL){
Node* temp =new Node(d);
head = temp;
tail=temp;
  }
  else{
  Node* temp=new Node(d);
  temp->next = head;
  head->prev = temp;
  temp->prev=NULL;
  head=temp;
  }
}

//insert at tail
void insertAtTail(Node* &tail , Node* &head,int d)
{
if(tail==NULL){
     Node* temp = new Node(d);
     tail=temp;
     head = temp;
}
else{
      Node* temp = new Node(d);
      tail ->next = temp;
      temp->prev=tail;
      tail = temp;
}
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
  // insert at starting
  if (position == 1)
  {
    insertAtHead(tail,head, d);
    return;
  }
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }
  // inserting at last position
  if (temp->next == NULL)
  {
    insertAtTail(tail,head, d);
    return;
  }
  // creating a node for d
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}
void deleteNode(int position,Node* & head){
    //deleting first or start node
    if(position == 1){
Node* temp=head;
temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
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
curr->prev=NULL;
prev->next= curr->next;
curr->next=NULL;
delete curr;
    }
}

int main()
{

//   Node* node1 =new Node(10);
//   Node* head =node1;
//  Node* tail = node1;
//   print(head);
//   cout<<getlength(head)<<endl;
  //  how to create the node it means creation of the node

  Node *head = NULL; // ye hamne head bana liya
  Node *tail = NULL;
  print(head);
    cout<<getlength(head)<<endl;

  insertAtHead(tail,head, 13);
  print(head);
 cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtHead(tail,head, 11);
  print(head);
  cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtHead(tail,head, 8);
  print(head);
 cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtHead(tail,head, 9);
  print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtTail(tail,head, 25);
  print(head);
   cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtPosition(tail, head, 2, 100);
  print(head);
    cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtPosition(tail, head, 1, 120);
  print(head);
    cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtPosition(tail, head, 4, 50);
  print(head);
 cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
  insertAtPosition(tail, head, 7, 600);
  print(head);
 cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
deleteNode(6,head);
print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;

  return 0;
}