int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int index1=0,index2=0;
        while(index1<g.size()&&index2<s.size())
        {
            if(s[index2]>=g[index1])
            {
                ans++;
                index1++;
                index2++;
            }
            else if(s[index2]<g[index1])
            {
                index2++;
            }
            else
            {
                index1++;
            }
        }
        return ans;
    }
