// class Solution {
// public:
// void solve(TreeNode* root,int sum,int &maxSum,int len,int &maxLen){
//     //base case
//     if(root==NULL){
//         if(len>maxLen){
//             maxLen=len;
//             maxSum=sum;
//         }
//         else if(len==maxLen){
//             maxSum=max(sum,maxSum);
//         }
//         return;
//     }
//     sum=sum+root->val;
//     solve(root->left,sum,maxSum,len+1,maxLen);
//     solve(root->right,sum,maxSum,len+1,maxLen);
// }
//     int sumNumbers(TreeNode* root) {
//         int len=0;
//         int maxLen=0;

//         int sum=0;
//         int maxSum=INT_MIN;

//         solve(root,sum,maxSum,len,maxLen);

//         return maxSum;
//     }
// };
#include <iostream>
#include <climits>
using namespace std;

// Define the structure of a TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void solve(TreeNode* root, int sum, int &maxSum, int len, int &maxLen) {
        // Base case: if the node is null
        if (root == NULL) {
            // If the current path length is greater than maxLen, update maxLen and maxSum
            if (len > maxLen) {
                maxLen = len;
                maxSum = sum;
            }
            // If the length is the same, update the maxSum if the current sum is greater
            else if (len == maxLen) {
                maxSum = max(sum, maxSum);
            }
            return;
        }
        // Add the current node's value to the sum
        sum += root->val;
        // Recursively call for left and right subtrees
        solve(root->left, sum, maxSum, len + 1, maxLen);
        solve(root->right, sum, maxSum, len + 1, maxLen);
    }

    int sumNumbers(TreeNode* root) {
        int len = 0;       // Current path length
        int maxLen = 0;    // Maximum path length found so far
        int sum = 0;       // Current sum along the path
        int maxSum = INT_MIN;  // Maximum sum among paths of maximum length

        solve(root, sum, maxSum, len, maxLen);

        return maxSum;  // Return the maximum sum
    }
};

int main() {
    // Create the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Tree structure:
    //        1
    //       / \
    //      2   3
    //     / \ / \
    //    4  5 6  7

    Solution solution;

    // Find the maximum sum of the longest path
    int result = solution.sumNumbers(root);

    // Output the result
    cout << "Maximum sum of the longest path: " << result << endl;

    // Free memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
