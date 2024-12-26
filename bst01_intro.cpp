#include <iostream>
#include <queue>

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

//**************LNR (Inorder)******************//
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);
}

//**************NLR (Preorder)******************//
void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//**************LRN (Postorder)******************//
void postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return; // Edge case: if the tree is empty
    }

    std::queue<Node *> q; // Use std::queue explicitly
    q.push(root);
    q.push(nullptr); // Marker for end of the current level

    while (!q.empty())
    {
        Node *temp = q.front(); // Get the front node
        q.pop();                // Remove the front node from the queue

        if (temp == nullptr)
        {
            // Current level complete, print a newline
            std::cout << std::endl;
            if (!q.empty())
            {
                // Queue still has nodes, push another level end marker
                q.push(nullptr);
            }
        }
        else
        {
            std::cout << temp->data << " "; // Print node data
            if (temp->left)
            {
                q.push(temp->left); // Add left child to the queue
            }
            if (temp->right)
            {
                q.push(temp->right); // Add right child to the queue
            }
        }
    }
}

Node *insertIntoBST(Node *root, int d)
{
    // Base case: if the tree is empty, create a new node
    if (root == nullptr)
    {
        return new Node(d);
    }

    // If the value is greater, insert in the right subtree
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // If the value is smaller, insert in the left subtree
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != nullptr)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != nullptr)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{
    // Base case
    if (root == nullptr)
    {
        return root;
    }

    if (root->data == val)
    {
        // Node with 0 children
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // Node with only left child
        if (root->left != nullptr && root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // Node with only right child
        if (root->left == nullptr && root->right != nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // Node with 2 children
        if (root->left != nullptr && root->right != nullptr)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        // Go to the left subtree
        root->left = deleteFromBST(root->left, val);
    }
    else
    {
        // Go to the right subtree
        root->right = deleteFromBST(root->right, val);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    std::cin >> data;

    // Continue inserting until the input is -1
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        std::cin >> data;
    }
}

int main()
{
    Node *root = nullptr;

    std::cout << "Enter data to create BST (-1 to stop):" << std::endl;
    takeInput(root);

    std::cout << "Printing the BST level-wise:" << std::endl;
    levelOrderTraversal(root);

    std::cout << "Inorder Traversal: ";
    inorder(root);
    std::cout << std::endl;

    std::cout << "Preorder Traversal: ";
    preorder(root);
    std::cout << std::endl;

    std::cout << "Postorder Traversal: ";
    postorder(root);
    std::cout << std::endl;

    std::cout << "Min value is " << minVal(root)->data << std::endl;
    std::cout << "Max value is " << maxVal(root)->data << std::endl;

    // DELETION
    root = deleteFromBST(root, 30);

    std::cout << "Printing the BST after deletion:" << std::endl;
    levelOrderTraversal(root);

    std::cout << "Inorder Traversal: ";
    inorder(root);
    std::cout << std::endl;

    std::cout << "Preorder Traversal: ";
    preorder(root);
    std::cout << std::endl;

    std::cout << "Postorder Traversal: ";
    postorder(root);
    std::cout << std::endl;

    std::cout << "Min value is " << minVal(root)->data << std::endl;
    std::cout << "Max value is " << maxVal(root)->data << std::endl;

    return 0;
}

