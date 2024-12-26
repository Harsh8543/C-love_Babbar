// class solution{
//     public:

//     vector<int>topView(Node*root){
//     vector<int>ans;
//     if(root==NULL){
//         return ans;
//     }

//     map<int,int>topNode;
//     queue<pair<Node*,int> >q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<Node*,int>temp=q.front();
//         q.pop();
//         Node* frontNode=temp.first;
//         int hd=temp.second;

//         //if one vslue is present for a HD,then do nothing
//         if(topNode.find(hd)==topNode.end())
//         topNode[hd]==firstNode->data;

//         if(frontNode->left)
//         q.push(make_pair(frontNode->left,hd-1));

//         if(frontNode->left)
//         q.push(make_pair(frontNode->right,hd+1));

//     }
//     for(auto i:topNode){
//         ans.push_back(i.second);
//     }
//     return ans;
// }
// }

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

// Definition of the Node structure
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
    vector<int> topView(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }

        // Map to store the first node for each horizontal distance
        map<int, int> topNode;
        // Queue to perform level-order traversal, storing node and its horizontal distance
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));

        while (!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;

            // If the horizontal distance has no node, insert the first node
            if (topNode.find(hd) == topNode.end()) {
                topNode[hd] = frontNode->data;
            }

            // Push the left child to the queue with hd - 1
            if (frontNode->left) {
                q.push(make_pair(frontNode->left, hd - 1));
            }

            // Push the right child to the queue with hd + 1
            if (frontNode->right) {
                q.push(make_pair(frontNode->right, hd + 1));
            }
        }

        // Extract the top view from the map
        for (auto i : topNode) {
            ans.push_back(i.second);
        }

        return ans;
    }
};

// Main function to test the topView function
int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution sol;
    vector<int> result = sol.topView(root);

    // Output the top view of the tree
    cout << "Top view of the binary tree: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
