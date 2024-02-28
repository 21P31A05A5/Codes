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
    // int ans,m;
    // bool lf=false,rt=false;
    // void pre(TreeNode* root,int val)
    // {
    //     if(m<val)
    //     {
    //         m=val;
    //         ans=root->val;
    //     }
    //     if(root->left!=NULL)
    //     {
    //         lf=true;
    //         pre(root->left,val+1);
    //     }
    //     if(root->right!=NULL)
    //     {
    //         pre(root->right,val+1);
    //     }
    // }
    // int findBottomLeftValue(TreeNode* root) 
    // {
    //     if(root->left==NULL&&root->right==NULL)
    //     {
    //         return root->val;
    //     }
    //     pre(root,0);
        
    //     return ans;
    // }


    void f(TreeNode* root, int& ans,int& maxlevel,int level)
    {
        if(root==NULL)
        {
            return;
        }
        if(level>maxlevel)
        {
            ans=root->val;
            maxlevel=level;
        }
        f(root->left,ans,maxlevel,level+1);
        f(root->right,ans,maxlevel,level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        int level=0;
        int maxlevel=0;
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        f(root,ans,maxlevel,level);
        return ans;
    }


};
