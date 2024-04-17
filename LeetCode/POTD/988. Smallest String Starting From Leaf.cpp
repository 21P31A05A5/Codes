/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string smallestFromLeaf(TreeNode* root) 
    {
        string str, result="{";
        smallestFromLeafHelper(root, str, result);
        return result;
    }
    
    void smallestFromLeafHelper(TreeNode* root, string str, string& result) 
    {
        if (root->left == NULL && root->right == NULL) {
            str.insert(0, 1, char(root->val+'a'));
            result = min(result, str);
            return;
        }
        
        str.insert(0, 1, char(root->val+'a'));
        
        if (root->left) {
            smallestFromLeafHelper(root->left, str, result);
        }
        if (root->right) {
            smallestFromLeafHelper(root->right, str, result);
        }
    }
};
