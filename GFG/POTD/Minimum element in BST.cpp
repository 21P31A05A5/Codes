class Solution {
    private:
    void solve(Node* root,int &ans){
        if(root==NULL) return;
        ans=root->data;
        solve(root->left,ans);
    }
  public:
    int minValue(Node* root) {
        // Code here
        int ans=root->data;
        solve(root,ans);
        return ans;
    }
};
