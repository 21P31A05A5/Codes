vector<vector<int>> uniquePerms(vector<int> &arr ,int n) 
    {
        // code here
        vector<vector<int>>result;
        string S;
        for(int i=0;i<n;i++)
        {
            S+=(arr[i]+'0');
        }
        
        vector<string>ans;
        sort(S.begin(),S.end());
        // cout<<S;
        ans.push_back(S);
        while(next_permutation(S.begin(), S.end()))
        {
        	ans.push_back(S);
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<endl;
        // }
        for(int i=0;i<ans.size();i++)
        {
            vector<int>temp;
            for(int j=0;j<ans[i].size();j++)
            {
                temp.push_back(ans[i][j]-'0');
            }
            result.push_back(temp);
        }
        
        return result;
    }
