//1st approach
class Solution {
public:
    bool divisorGame(int n) 
    {
        if(n<=1)return false;
        for(int x=1;x<n;x++)
        {
            if(n%x==0)
            {
                return !(divisorGame(n-x));
            }
        }
        return false;
    }
};


//2nd Approach
class Solution {
public:
    bool divisorGame(int n) 
    {
        if(n%2==0)
        {
            return true;
        }
        return false;
    }
};
