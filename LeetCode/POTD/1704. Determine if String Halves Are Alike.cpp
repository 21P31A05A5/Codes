bool halvesAreAlike(string s) 
    {
        int n=s.size();
        int a=0;
        int b=0;
        for(int i=0;i<(n/2);i++)
        {   
            s[i]=tolower(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            {
                a++;
                cout<<s[i]<<" ";
            }
        }
        for(int i=n/2;i<n;i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            {
                b++;
            }
        }
        if(a==b)
        {
            return true;
        }
        return false;
    }
