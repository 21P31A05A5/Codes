class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.size();
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
            }
            else if(i==(n-1) && s[i]==' ')continue;
            else if(s[i]==' ' && s[i+1]!=' ')break;
        }
        return count;
    }
};
