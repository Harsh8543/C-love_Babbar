// class solution{
//     public:
//     Node* lca(Node* root,int n1,int n2){
//         //base case
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->data==n1 || root->data==n2){
//             return root;
//         }
//         Node* leftAns=lca(root->left,n1,n2);
//         Node* rightAns=lca(root->right,n1,n2);

//         if(leftAns!=NULL && rightAns!=NULL){
//             return root;
//         }
//         else if(leftAns!=NULL && rightAns==NULL)
//         return leftAns;
//    else if(leftAns==NULL && rightAns != NULL)
//         return rightAns;
        
//         else{
//             return NULL;
//         }
//     }
// };
#include<iostream>
using namespace std;

// Definition of the Node class
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// The solution class with the lca function
class solution {
    public:
    Node* lca(Node* root, int n1, int n2) {
        // Base case
        if (root == NULL) {
            return NULL;
        }
        if (root->data == n1 || root->data == n2) {
            return root;
        }
        Node* leftAns = lca(root->left, n1, n2);
        Node* rightAns = lca(root->right, n1, n2);

        if (leftAns != NULL && rightAns != NULL) {
            return root;
        }
        else if (leftAns != NULL && rightAns == NULL)
            return leftAns;
        else if (leftAns == NULL && rightAns != NULL)
            return rightAns;
        else {
            return NULL;
        }
    }
};

// Function to create a sample binary tree and test the lca function
int main() {
    // Creating a sample binary tree
    /*
              3
            /   \
           5     1
          / \   / \
         6   2  0   8
            / \
           7   4
    */
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    solution sol;

    // Example: Finding the LCA of nodes 5 and 1
    int n1 = 5, n2 = 1;
    Node* lcaNode = sol.lca(root, n1, n2);

    if (lcaNode != NULL) {
        cout << "LCA of " << n1 << " and " << n2 << " is: " << lcaNode->data << endl;
    } else {
        cout << "LCA not found." << endl;
    }

    return 0;
}
