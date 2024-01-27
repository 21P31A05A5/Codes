vector<long long int>dp(1001,-1);
class Solution{
public:
    int mod=10;
    int nthFibonacci(int n)
    {
        // code here
        if(dp[n]!=-1)return dp[n];
        if(n<=1)
        {
            return dp[n]=n;
        }
        return dp[n]=(nthFibonacci(n-1)%mod + nthFibonacci(n-2)%mod)%mod;
    }
    int fib(int N)
    {
        //code here
        return nthFibonacci(N);
    }
};
