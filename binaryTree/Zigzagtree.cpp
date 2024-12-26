// class solution{
//     public:
//     vector<int>ZigZagTraversal(Node* root){
//         vector<int>result;
//         if(root==NULL){
//         return result;
//         }
//         queue<Node*>q;
//         q.push(root);
//         bool leftToRight=true;
//         while(!q.empty()){
//             int size=q.size();
//             vector<int>ans(size);
//             //level process
//             for(int i=0;i<size;i++){
//                 Node* frontNode=q.front();
//                 q.pop();
// ///normal insert or reverse insert
//                 int index=leftToRight ? i :size-i-1;
//                 ans[index]=frontNode->data;
//                 if(frontNode->left){
//                     q.push(frontNode->left);
//                 }
//                 if(frontNode->right){
//                     q.push(frontNode->right);
//                 }
//             }
//             //direction change karni hai
//             leftToRight=!leftToRight;
//             for(auto i:ans){
//                 result.push_back(i);
//             }
//         }
//         return result;
//     }
// };

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Definition for a binary tree node
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
    vector<int> ZigZagTraversal(Node* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }
        queue<Node*> q;
        q.push(root);
        bool leftToRight = true;
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);
            // level process
            for (int i = 0; i < size; i++) {
                Node* frontNode = q.front();
                q.pop();
                
                // normal insert or reverse insert
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->data;
                
                if (frontNode->left) {
                    q.push(frontNode->left);
                }
                if (frontNode->right) {
                    q.push(frontNode->right);
                }
            }
            // change the direction
            leftToRight = !leftToRight;
            
            for (auto i : ans) {
                result.push_back(i);
            }
        }
        return result;
    }
};

// Main function to test ZigZagTraversal
int main() {
    // Construct the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    // Create solution object and call ZigZagTraversal
    solution sol;
    vector<int> result = sol.ZigZagTraversal(root);
    
    // Print the result
    cout << "ZigZag Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}
