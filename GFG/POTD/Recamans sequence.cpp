vector<int> recamanSequence(int n)
    {
        // code here
        vector<int>ans;
        set<int>st;
        ans.push_back(0);
        st.insert(0);
        for(int i=1;i<n;i++)
        {
            int temp=ans[i-1]-i;
            if(temp>0 && st.find(temp)==st.end())
            {
                ans.push_back(temp);
                st.insert(temp);
            }
            else
            {
                ans.push_back(ans[i-1]+i);
                st.insert(ans[i-1]+i);
            }
        }
        return ans;
    }
