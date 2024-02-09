int solve(Node* root)
    {
        if(!root)return 1;
        if(!root->left&&!root->right)return 1;
        int sum=0;
        if(root->right)
        {
            sum+=root->right->data;
        }
        if(root->left)
        {
            sum+=root->left->data;
        }
        if(root->data==sum)
        {
            int b=1&solve(root->left);
            b=b&solve(root->right);
            return b;
        }
        else return 0;
    }
    int isSumProperty(Node *root)
    {
        return solve(root);
    }
