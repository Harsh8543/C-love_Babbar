// class solution{
//     public:
//     void solve(Node*root,int k,int &count,vector<int>path){
//         //base case
//         if(root==NULL){
//             return;
//         }
//         path.push_back(root->data);
//         //left
//         solve(root->left,k,count,path);
//         //right
//         solve(root->left,k,count,path);

//         //check for K sum
//         int size=path.size();
//         int sum=0;
//         for(int i=size-1;i>=0;i--){
//             sum=sum+path[i];
//             if(sum==k)
//             count++;
//         }
//         path.pop_back();
//     }
//     int sumK(Node *root,int k){
//         vector<int>path;
//         int count=0;
//         solve(root,k,count,path);
//         return count;

//     }
// };

#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
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

class solution {
public:
    void solve(Node* root, int k, int &count, vector<int> path) {
        // base case
        if (root == NULL) {
            return;
        }

        // Add current node's data to path
        path.push_back(root->data);

        // Traverse the left and right subtrees
        solve(root->left, k, count, path);
        solve(root->right, k, count, path);

        // Check for K sum in the current path
        int size = path.size();
        int sum = 0;
        for (int i = size - 1; i >= 0; i--) {
            sum += path[i];
            if (sum == k)
                count++;
        }

        // Backtrack by removing the current node from the path
        path.pop_back();
    }

    int sumK(Node *root, int k) {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};

// Main function
int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(-1);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->right = new Node(5);

    solution sol;
    int k = 5; // Sum to be checked
    int result = sol.sumK(root, k);

    cout << "Number of paths with sum " << k << " is: " << result << endl;

    // Free the allocated memory
    delete root->left->right->left;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
