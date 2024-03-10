vector<string> findgray(int n)
    {
        if(n==1)
        {
            return {"0","1"};
        }
        vector<string> ans;
        vector<string> temp = findgray(n-1);
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back("0"+temp[i]);
        }
        for(int i=temp.size()-1;i>=0;i--)
        {
            ans.push_back("1"+temp[i]);
        }
        return ans;
    }
    vector<string> graycode(int n)
    {
        //code here
        vector<string>ans=findgray(n);
        return ans;
    }
