class Solution{
int mod=1e9+7;
public:
    long long helper(int i,int count,int n)
    {
        if(i>n)
        {
            return 0;
        }
        long long  sum=1;
        for(int j=1;j<=i;j++)
        {
            sum=(sum*count)%mod;
            count++;
        }
        // cout<<sum<<endl;
        return ((sum%mod)+(helper(i+1,count,n)%mod))%mod;
    }
    long long sequence(int n)
    {
        // code here
        return (helper(1,1,n)%mod);
    }
};
