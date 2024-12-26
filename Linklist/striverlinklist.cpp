#include<bits/stdc++.h>
using namespace std;
//initilize the  class
class Node{  //there is the two things which is inside the single linkelist class is data and the pointer to the next
    public:
    int data;
    Node*next;

//constructor
public:
Node(int data1, Node* next1){
    data = data1;
    next= next1;
}

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}
int lengthOfLL(Node* head){
    int cnt=0;
        Node* temp = head;
     while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}
Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}
int checkIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data == val) return 1;
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {12,5,8,9};
    // Node* y = new Node (arr[0]);
     // cout<< y-> data<<endl;
    Node* head= convertArr2LL(arr);
    // cout<< head->data;
    // Node* temp = head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<lengthOfLL(head);
    // cout<<checkIfPresent(head,15);
    head= removeHead(head);
    print (head);
}