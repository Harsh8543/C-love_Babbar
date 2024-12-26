// class solution{
//     public:
//     void traversalLeft(Node*root,vector<int> &ans){
//         //base case
//         if((root==NULL)|| (root->left==NULL && root->right==NULL))
//         return;

//    ans.push_back(root->data);
//    if(root->left)
//    traversalLeft(root->left,ans);
//    else{
//     traversalLeft(root->right,ans);
//    }
//     }
//    void traversalLeaf(Node* root,vector<int>&ans){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     if(root->left == NULL && root->right==NULL){
//         ans.pudh_back(root->data);
//         return;
//     }
// traversalLeaf(root->left,ans);
// traversalLeaf(root->right,ans);
//    }

// void traversalRight(Node* root,vector<int>&ans){
//     //base case
//     if((root==NULL) || (root->left==NULL && root->right==NULL)){
//         return;
//     }
//     if(root->right)
//     traversalRight(root->right,ans);
//     else
//     traversalRight(root->left,ans);
//     }
//     //wapas aagaye
//     ans.push_back(root->data);
// }

    

//     vector<int> boundary(Node* root){
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
//         //left part print/store
//         ans.push_back(root->left,ans);
//         //traversal subtree
//         traversalLeaf(root->left,ans);
//         //right subtree
//         traversalLeaf(root->right,ans);

//         //traverse right part
//         traversalRight(root->right,ans);
//         return ans;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    void traversalLeft(Node* root, vector<int>& ans) {
        // Base case
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
            return;

        ans.push_back(root->data);
        if (root->left)
            traversalLeft(root->left, ans);
        else {
            traversalLeft(root->right, ans);
        }
    }

    void traversalLeaf(Node* root, vector<int>& ans) {
        // Base case
        if (root == NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }
        traversalLeaf(root->left, ans);
        traversalLeaf(root->right, ans);
    }

    void traversalRight(Node* root, vector<int>& ans) {
        // Base case
        if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return;
        }
        if (root->right)
            traversalRight(root->right, ans);
        else
            traversalRight(root->left, ans);
        // Add root's data after recursive calls
        ans.push_back(root->data);
    }

    vector<int> boundary(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
        // Add the root's data
        ans.push_back(root->data);

        // Traversing left boundary (excluding the leaf nodes)
        traversalLeft(root->left, ans);

        // Traversing all leaf nodes (from both left and right subtrees)
        traversalLeaf(root->left, ans);
        traversalLeaf(root->right, ans);

        // Traversing right boundary (excluding the leaf nodes) in reverse
        traversalRight(root->right, ans);

        return ans;
    }
};

// Function to create a binary tree and call the boundary traversal
int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Solution class object
    Solution solution;
    
    // Get boundary traversal
    vector<int> result = solution.boundary(root);

    // Printing the boundary traversal
    cout << "Boundary traversal of the tree is: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
