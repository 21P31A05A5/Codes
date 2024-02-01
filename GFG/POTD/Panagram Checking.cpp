bool checkPangram (string s) 
    {
        // your code here
        unordered_map<char,int>ump;
        for(int i=0;i<s.size();i++)
        {
            ump[tolower(s[i])]++;
        }
        for(char i='a';i<='z';i++)
        {
            if(ump.find(i)!=ump.end())
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
