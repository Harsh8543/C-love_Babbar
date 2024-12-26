// class Solution{
//     int height(Struct Node* node){
//         //base case
//         if(node==NULL){
//             return 0;
//         }
//         int left=height(node->left);
//         int right=height(node->right);
//         int ans=max(left,right)+1;
//         return ans;
//     }
// }



#include <iostream>
#include <algorithm>
using namespace std;

// Definition of the Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    // Function to calculate the height of the binary tree
    int height(Node* node) {
        // base case
        if (node == NULL) {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        int ans = max(left, right) + 1;
        return ans;
    }
};

// Main function to test the height() function
int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Create an object of Solution class
    Solution sol;

    // Calculate and print the height of the binary tree
    int treeHeight = sol.height(root);
    cout << "Height of the tree: " << treeHeight << endl;

    return 0;
}
