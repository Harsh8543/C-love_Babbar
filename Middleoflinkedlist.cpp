#include<iostream>
using namespace std;

// Definition for the Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to get the length of the linked list
int getLength(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to find the middle node of the linked list
Node* findMiddle(Node* head) {
    int len = getLength(head);
    int ans = len / 2;

    Node* temp = head;
    int cnt = 0;
    while (cnt < ans) {
        temp = temp->next;
        cnt++;
    }
    return temp;
}

// Main function
int main() {
    // Example of creating a linked list and finding the middle node
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "The middle node value is: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
