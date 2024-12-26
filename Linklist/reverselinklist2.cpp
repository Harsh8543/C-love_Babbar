// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if (head == NULL || head->next == NULL) {
//             return head;
//         }
        
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;

//         while (curr != NULL) {
//             forward = curr->next;  // Save the next node
//             curr->next = prev;     // Reverse the current node's pointer
//             prev = curr;           // Move prev to the current node
//             curr = forward;        // Move to the next node
//         }

//         return prev; // prev will be the new head of the reversed list
//     }
// };

//*********************************************************************************************************
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) {
//             return head;
//         }
        
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* forward = nullptr;

//         while (curr != nullptr) {
//             forward = curr->next;  // Save the next node
//             curr->next = prev;     // Reverse the current node's pointer
//             prev = curr;           // Move prev to the current node
//             curr = forward;        // Move to the next node
//         }

//         return prev; // prev will be the new head of the reversed list
//     }
// };

//************************************************************************************************************************************************************************************************************************** */
#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forward = nullptr;

        while (curr != nullptr) {
            forward = curr->next;  // Save the next node
            curr->next = prev;     // Reverse the current node's pointer
            prev = curr;           // Move prev to the current node
            curr = forward;        // Move to the next node
        }

        return prev; // prev will be the new head of the reversed list
    }
};

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    // Printing the reversed linked list
    ListNode* temp = reversedHead;
    cout << "Reversed Linked List: ";
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}













