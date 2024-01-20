int solve(Node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int l=solve(root->left,ans);
    int r=solve(root->right,ans);
    ans+=abs(l)+abs(r);
    return root->key+l+r-1;
}
class Solution
{
    public:
    int distributeCandy(Node* root)
    {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};
