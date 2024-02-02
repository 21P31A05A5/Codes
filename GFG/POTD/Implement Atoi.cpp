int atoi(string s) 
    {
        //Your code here
        bool status=false;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='-' && i==0)
            {
                status=true;
                continue;
            }
            int k=s[i]-'0';
            if(k>=0 && k<=9)
            {
                ans=ans*10+k;
            }
            else
            {
                return -1;
            }
        }
        if(status)
        {
            ans=ans*-1;
        }
        return ans;
    }
