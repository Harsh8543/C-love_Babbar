// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> ans;
//         if(root == NULL) 
//         {
//             return ans;
//         }
        
//         map<int,int> topNode;
//         queue<pair<Node*, int> > q;   //first element is the pointer to the node and the second is its horizontal
        
//         q.push(make_pair(root, 0));  //q.push(make_pair(root, 0)): This starts the level order traversal by adding the root node to the queue with a horizontal distance of 0.
        
//         while(!q.empty()) {
//             pair<Node*, int> temp = q.front(); //Retrieves the node and its horizontal distance from the front of the queue.
//             q.pop();  //Removes the processed node from the queue.
//             Node* frontNode = temp.first;//The actual node is stored in frontNode.
//             int hd = temp.second;//The horizontal distance of the node is stored in hd.
            
//             //if one value is present for a HD, then do nothing
//             if(topNode.find(hd) == topNode.end())  // Checks if the current horizontal distance (HD) is already present in the topNode map.
//                 topNode[hd] = frontNode -> data; //If it isn't present, it means this is the first time we're encountering this HD, so the node's data is added to the map. This ensures that only the first node (the topmost node) encountered at each HD is stored.
//                 //If the HD is already present, the current node is ignored (since we're only interested in the topmost node for each HD).
//             if(frontNode->left)//If the current node has a left child, it is added to the queue with hd-1, meaning it's one step to the left of the current node.
//                 q.push(make_pair(frontNode->left, hd-1));
//             if(frontNode->right)//If the current node has a right child, it is added to the queue with hd+1, meaning it's one step to the right of the current node.
//                 q.push(make_pair(frontNode->right, hd+1));
//         }
        
//         for(auto i:topNode) //This loop iterates over the topNode map (which is sorted by HD due to the nature of map), and extracts the values (node data) from each HD.
//         {
//             ans.push_back(i.second);//Appends the node values to the ans vector, which represents the top view of the tree.
//         }
//         return ans;
//     }

// };


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends


/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL) 
        {
            return ans;
        }
        
        map<int,int> topNode;
        queue<pair<Node*, int> > q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            //if one value is present for a HD, then do nothing
            if(topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode -> data;
                
            if(frontNode->left)
                q.push(make_pair(frontNode->left, hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right, hd+1));
        }
        
        for(auto i:topNode) 
        {
            ans.push_back(i.second);
        }
        return ans;
    }

};



// { Driver Code Starts.

int main() {
    int tc;
    cin>>tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for(int x : vec)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends