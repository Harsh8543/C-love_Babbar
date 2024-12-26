#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data" << value << endl;
    }
};
void insertNode(Node* &tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element present in the list
        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found->curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next=temp;
    }
}


void print(Node* tail){
Node* temp=tail;
//empty list
if(tail==NULL){
    cout<<"List is empty"<<endl;
    return;
}
do{
    cout<<tail->data<<" ";
    tail=tail->next;

}
while(tail != temp);
cout<<endl;
}
void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // if(tail==curr){
        //     tail=prev;
        // }
        // curr->next=NULL;
        // delete curr;
        //1 Node Linked List

        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}



int main()
{
Node* tail=NULL;
//empty list me insert kar rahe hai
insertNode(tail,5,3);
print(tail);

insertNode(tail,3,5);
print(tail);


// insertNode(tail,5,7);
// print(tail);

// insertNode(tail,7,9);
// print(tail);

// insertNode(tail,5,6);
// print(tail);

// insertNode(tail,9,10);
// print(tail);

// insertNode(tail,3,4);
// print(tail);

// deleteNode(tail,5);
// print(tail);
if(isCircularList(tail)){
    cout<<"linked is circular in the nature"<<endl;

}
else{
cout<<" linked list is not circular in the nature"<<endl;
}
 return 0;

}