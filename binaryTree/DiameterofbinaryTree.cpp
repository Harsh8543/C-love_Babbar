//there are the three approsch to solve the Diameter of the Binary Tree
//op-1-----> Diameter (root->Right)
// op-2-------> Diameter (root->Left)
// 0p-3------->Height(root->Left)+1+height(root->right)

//*********************************************************************************************************************************************** */
// Time complaxity is O(n2)
// class Solution{
//     private:
//         int height(Node* node) {
//         // base case
//         if (node == NULL) {
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right) + 1;
//         return ans;
//     }
//     int diameter(Node* root){
//         //base case
//         if(root==NULL){
//             return 0;
//         }
//         int op1= diameter(root->left);
//         int op2=diameter(root->right);
//         int op3= height(root->left)+height(root->right);

//         int ans=max(op1,max(op2,op3));
//         return ans;
//     }
// }

//************************************************************************************************************************************************************ */

// #include <iostream>
// #include <algorithm>
// using namespace std;

// // Definition of the Node structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
    
//     // Constructor
//     Node(int value) {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };

// class Solution {
// private:
//     // Function to calculate the height of the binary tree
//     int height(Node* node) {
//         // base case
//         if (node == NULL) {
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         return max(left, right) + 1;
//     }

// public:
//     // Function to calculate the diameter of the binary tree
//     int diameter(Node* root) {
//         // base case
//         if (root == NULL) {
//             return 0;
//         }

//         // Option 1: diameter is in the left subtree
//         int op1 = diameter(root->left);
        
//         // Option 2: diameter is in the right subtree
//         int op2 = diameter(root->right);
        
//         // Option 3: diameter passes through the root
//         int op3 = height(root->left) + height(root->right);

//         // Return the maximum of the three options
//         return max(op1, max(op2, op3));
//     }
// };

// // Main function to test the diameter() function
// int main() {
//     // Creating a binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     // Create an object of Solution class
//     Solution sol;

//     // Calculate and print the diameter of the binary tree
//     int treeDiameter = sol.diameter(root);
//     cout << "Diameter of the tree: " << treeDiameter << endl;

//     return 0;
// }

//******************************************************************************************************************************************* */
// class Solution{
//     private:
//         int height(Node* node) {
//         // base case
//         if (node == NULL) {
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right) + 1;
//         return ans;
//     }
// //Function to return the diameter of the binary tree
// pair<int,int>diameterFast(Node* root){
//     //base case
//     if(root==NULL){
//         pair<int,int>p = make_pair(0,0);
//        return p;
//     }
//     pair<int,int>left=diameterFast(root->left);
//     pair<int,int>right=diameterFast(root->right);

//     int op1=left.first;
//     int op2=right.first;
//     int op3=left.second+right.second+1;

//     pair<int,int>ans;
//     ans.first=max(op1,max(op2,op3));
//     ans.second=max(left.second,right.second)+1;
//     return ans;
// }
// int diameter(Node* root){
//     return diameterFast(root).first;
// }
// };

//***************************************************************************************************************************************************************************** */
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
private:
    // Function to calculate the height of the binary tree
    int height(Node* node) {
        if (node == NULL) {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        return max(left, right) + 1;
    }

    // Helper function that returns both diameter and height of the tree
    pair<int, int> diameterFast(Node* root) {
        // base case
        if (root == NULL) {
            return make_pair(0, 0); // (diameter, height)
        }

        // Recursive call for left and right subtrees
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        // Calculate possible diameters
        int op1 = left.first;  // Diameter of left subtree
        int op2 = right.first; // Diameter of right subtree
        int op3 = left.second + right.second + 1; // Diameter passing through root

        // Result pair: (maximum diameter, height of current subtree)
        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

public:
    // Function to return the diameter of the binary tree
    int diameter(Node* root) {
        return diameterFast(root).first;
    }
};

// Main function to test the diameter() function
int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Create an object of the Solution class
    Solution sol;

    // Calculate and print the diameter of the binary tree
    int treeDiameter = sol.diameter(root);
    cout << "Diameter of the tree: " << treeDiameter << endl;

    return 0;
}
