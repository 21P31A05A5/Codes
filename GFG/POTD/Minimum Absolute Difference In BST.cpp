class Solution
{
    public:
    void traverse(Node *root, vector<int>& inorder)
    {
        if(root == NULL) return;
        
        traverse(root->left, inorder);
        inorder.push_back(root->data);
        traverse(root->right, inorder);
    }
    
    int absolute_diff(Node *root)
    {
        vector <int> inorder;
        traverse(root, inorder);
        int minDiff = INT_MAX;
        for(int i = 1; i< inorder.size(); i++)
        {
           int diff = inorder[i] - inorder[i-1];
           minDiff = min(minDiff, diff);
        }
        
        return minDiff;
    }
};
