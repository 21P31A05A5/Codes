#define ll long long
int mod=1e9+7;
class Solution
{
	public:
	int TotalWays(int N)
	{
	    int a=1;
	    int b=1;
	    for(int i=1;i<=N;i++)
	    {
	        int curr=(a+b)%mod;
	        b=a;
	        a=curr;
	    }
	    return (1LL*a*a)%mod;
	}
};
