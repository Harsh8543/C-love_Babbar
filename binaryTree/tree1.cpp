// Tree->->->  tree is the non linear data structure.

//Basic terms

// 1. Node
// 2.Root    //starting node
// 3.Children  // that branced node which is connected to the parent node
// 4.Siblings  // branched node having the same parent
// 5.Parent   //which have the branch of node
// 6.Ancestor   // pik up the node and moves forwaed 
// 7.descendent  //pik up the nodes and the moves downward
// 8.Leaf       //the node which not have the children 


// Two child binary tree
// node{
//     int data;
//     node* left;
//     node* right;
// }

// multiple child tree
// node{
//     int data;
//     list<node*>child;
// }



#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);  //this line because as we know the node contain only single element so that after single element it was completed so,we have to add NULL that's why it moves on the further line

    while(!q.empty()) {
        node* temp = q.front();  //this denote ki queue ke left me kaya pada hai
        q.pop();  //usko pop kar ke ham left aur right me dalenge

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
//*************************************************************************************************** */
// L->>>> left me jao
// R->>>> Right me jao
// N->>>> Node par jao/print kardo

// INORDER     PREORDER       POSTORDER
//  LNR          NLR           LRN
//*************************************************************************************************************** */

//***********LNR******************//

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

//***********NLR******************//

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

//**************LRN******************//

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }


int main() {

    node* root = NULL;
//  root=buildTree(root);
   buildFromLevelOrder(root);
    levelOrderTraversal(root);
    
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    
    //creating a Tree
    // root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    // cout << "Printing the level order tracersal output " << endl;
    // levelOrderTraversal(root);

    // cout << "inorder traversal is:  ";
    // inorder(root); 

    // cout << endl << "preorder traversal is:  ";
    // preorder(root); 

    // cout << endl << "postorder traversal is:  ";
    // postorder(root); 
    


    return 0;
}



