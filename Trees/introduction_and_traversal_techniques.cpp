// Introduction to Binary Trees

/*Types of Binary Trees
-Full Binary Tree   --> either has 0 or 2 children
-Complete Binary Tree
-Perfect Binary Tree
-Balanced Binary Tree        Height --> max --> log N
-Degenerate Binary Tree*/

// Declaration of a particular tree structure

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
}

main()
{
    struct Node *root = new Node(1)
                            root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}

// Traversal Techniques (BFS/DFS)

Pre - Order traversal(Root Left Right)
    // Recursive way:-

    void preorder(node)
{
    if (node == NULL)
        return;

    print(node->data);
    preorder(node->left);
    preorder(node->right);
}

// Iterative way:-

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> preorder;
    if (root == NULL)
        return preorder;

    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        preorder.push_back(root->val);

        if (root->right != NULL)
            st.push(root->right);

        if (root->left != NULL)
            st.push(root->left);
    }
    return preorder;
}

Inorder Traversal(Left Root Right)
    // Recursive way:-

    void inorder(node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    print(node->data);
    inorder(node->right);
}

// Iterative way:-

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> inorder;
    TreeNode *node = root;
    stack<TreeNode *> st;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }
    return inorder;
}

PostOrder Traversal(Left Right Root)
    // Recursive way:-

    void postorder(node)
{
    if (node == NULL)
        return;

    postorder(node->left);
    postorder(node->right);
    print(node->data);
}

// Iterative way:-
Using 2 Stacks

    vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> postorder;
    stack<TreeNode *> st1, st2;
    if (root == NULL)
        return postorder;
    st1.push(root);

    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);

        if (root->left != NULL)
            st1.push(root->left);

        if (root->right != NULL)
            st1.push(root->right);
    }

    while (!st2.empty())
    {
        postorder.push_back(st2.top()->val);
        st2.pop();
    }
    return postorder;
}


Level Order Traversal 

 vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans; 
    }