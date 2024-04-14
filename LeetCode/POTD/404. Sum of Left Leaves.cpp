class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // if(!root) return 0;
        // stack<TreeNode*>s;
        // int sum = 0;
        // while(!s.empty() || root){
        //     while(root){
        //         s.push(root);
        //         root = root->left;
        //         if(root && !root->left && !root->right) sum += root->val;
        //     }
        //     root = s.top()->right;
        //     s.pop();
        // }
        // return sum;
        if(root==NULL){
            return 0;
        }
        int sum=0;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
            sum=sum+root->left->val;
        }
        return sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
