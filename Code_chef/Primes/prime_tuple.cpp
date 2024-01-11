#include <bits/stdc++.h>
using namespace std;
vector<long long> primes(1e6 + 1, 1);
// vector<int>v;
vector<int>pre(1e6+1,0);
void generate_seive()
{
    int n = primes.size();
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    for(int i=5;i<=n;i++){
        pre[i]+=pre[i-1];
        if(primes[i] && primes[i-2])pre[i]++;
    }
    
}
int main() 
{
	int stress;
	cin>>stress;
	generate_seive();
	while(stress--)
    {
        int m;
        cin>>m;
        cout<<pre[m]<<"\n";
    }
}
