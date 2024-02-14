#include <bits/stdc++.h>
using namespace std;
vector<bool> primes;
vector<int>ans;
void generate_seive()
{
    int n=1e8+1;
    primes.assign(n+1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(primes[i])ans.push_back(i);
    }
}

int main() 
{
	// your code goes here
    int tt;
    cin>>tt;
    generate_seive();
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int>result;
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
                result.push_back(ans[i]);
                result.push_back(ans[i]);
            }
        }
        else
        {
            result.push_back(1);
            for(int i=0;i<n/2;i++)
            {
                result.push_back(ans[i]);
                result.push_back(ans[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
