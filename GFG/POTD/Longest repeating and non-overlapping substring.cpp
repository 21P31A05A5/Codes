string longestSubstring(string s, int n) 
    {
        // code here
        string res;
        for(int i=0,j=0;j<n;j++) 
        {
            string str=s.substr(i,j-i+1);
            if(s.find(str,j+1)!=-1)
                res=str;
            else
                i++;
        }
        return res==""?"-1":res;
    }
