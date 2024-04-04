class Solution
{
    public:
    int mod = 1e9+7;
    long long sumSubstrings(string s)
    {
        int n= s.size();
        vector<long long> arr(n,0);
        arr[0] = s[0]-'0';
        long long ans = arr[0];
        for(int i=1;i<n;i++)
        {
            arr[i] = ((arr[i-1]*10)%mod + ((s[i]-'0')*(i+1))%mod)%mod;
            ans = (ans + arr[i])%mod;
        }
        return ans;
    }
};
