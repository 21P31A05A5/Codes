vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) 
    {
        vector<int> ans;
        sort(b.begin(),b.end());
        for(int i=0;i<q;i++)
        {
            ans.push_back(upper_bound(b.begin(),b.end(),a[query[i]])-b.begin());
        }
        return ans;
    }
