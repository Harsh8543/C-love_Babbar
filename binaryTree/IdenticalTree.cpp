// class solution{
//     public:
//     bool isIdentical(Node *r1,Node *r2){
//         //base case
//         if(r1==NULL && r2==NULL){
//             return true;
//         }
//         if(r1==NULL && r2!=NULL){
//             return false;
//         }
//         if(r1!= NULL && r2==NULL){
//             return false;
//         }
//         bool left = isIdentical(r1->left,r2->left);
//         bool right=isIdentical(r1->right,r2->right);

//         bool value = r1->data == r2->data;
//         if(left&& right&& value){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }


#include <iostream>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    // Function to check if two trees are identical
    bool isIdentical(Node *r1, Node *r2) {
        // Base case: both trees are empty
        if (r1 == NULL && r2 == NULL) {
            return true;
        }
        // One tree is empty and the other is not
        if (r1 == NULL || r2 == NULL) {
            return false;
        }

        // Recursively check left and right subtrees
        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);

        // Check if the current nodes are equal
        bool value = r1->data == r2->data;

        // If both subtrees and current nodes are identical, return true
        return left && right && value;
    }
};

int main() {
    // Create the first binary tree
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    // Create the second binary tree
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    // Create Solution object
    Solution solution;

    // Check if the two trees are identical
    if (solution.isIdentical(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }

    return 0;
}
