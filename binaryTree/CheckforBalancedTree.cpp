   
//    class Solution{
//  private:
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
//     public:
//     bool isBalanced(Node *root){
//         //base case
//         if(root==NULL){
//             return true;
//         }
//         bool left=isBalnced(root->left);
//         bool right=isBalnced(root->right);
//        bool diff=abs(height(root->left)-height(root->right))<=1;

//        if(left && right && diff){
//         return 1;
//        }
//        else{
//         return false;
//        }
//     }
//    };




// #include <iostream>
// #include <cmath>
// using namespace std;

// // Define the structure of a Node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// class Solution {
// private:
//     // Helper function to calculate the height of the tree
//     int height(Node* node) {
//         // Base case
//         if (node == NULL) {
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right) + 1;
//         return ans;
//     }

// public:
//     // Function to check if the tree is balanced
//     bool isBalanced(Node *root) {
//         // Base case
//         if (root == NULL) {
//             return true;
//         }

//         bool left = isBalanced(root->left);   // Corrected typo here
//         bool right = isBalanced(root->right); // Corrected typo here
//         bool diff = abs(height(root->left) - height(root->right)) <= 1;

//         if (left && right && diff) {
//             return true;
//         } else {
//             return false;
//         }
//     }
// };

// int main() {
//     // Create the binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
    
//     // Create Solution object
//     Solution solution;

//     // Check if the tree is balanced
//     if (solution.isBalanced(root)) {
//         cout << "The tree is balanced." << endl;
//     } else {
//         cout << "The tree is not balanced." << endl;
//     }

//     return 0;
// }


//*****************************************************************************************************************************************************/
// class Solution{
//     public:
//     pair<bool,int>isBalancedFast(Node* root){
//         //base case
//         if(root==NULL){
//             pair<bool,int>p = make_pair(true,0);
//             return p;
//         }
//         pair<int,int>left=isBalancedFast(root->left);
//         pair<int,int>left=isBalancedFast(root->left);

//        bool leftAns=left.first;
//        bool rightAns=right.first;
//        bool diff=abs(left.second-right.second)+1;

//        if(leftAns && rightAns && diff){
//         ans.first=true;
//        }
//        else{
//         ans.first=false;
//        }
//        bool isBalanced(Node* root){
//         return isBalancedFast(root).first;
//        }
//     }
// };



#include <iostream>
#include <cmath>
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
    // Helper function that returns a pair of {isBalanced, height}
    pair<bool, int> isBalancedFast(Node* root) {
        // Base case: If node is NULL, it's balanced and height is 0
        if (root == NULL) {
            return make_pair(true, 0);
        }

        // Recursively check left and right subtrees
        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        // Check if left and right subtrees are balanced
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        // If both subtrees are balanced and the current node's height difference is within 1, the tree is balanced
        if (leftAns && rightAns && diff) {
            ans.first = true;
        } else {
            ans.first = false;
        }

        return ans;
    }

    // Function to check if the tree is balanced
    bool isBalanced(Node* root) {
        return isBalancedFast(root).first;
    }
};

// Main function
int main() {
    // Create the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    // Create Solution object
    Solution solution;

    // Check if the tree is balanced
    if (solution.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}
