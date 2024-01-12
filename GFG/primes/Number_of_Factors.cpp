#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
vector<int>primes(N,0);
void generate_seive()
{
    for(int i = 0 ; i < N ; i++)primes[i] = i;
    if(primes[4]!=4)return;
    for (int i = 2; i*i < N; i++)
    {
        if(primes[i]==i)
        {
            for (int j = i * i; j < N; j += i)
            {
                primes[j] = i;
            }
        }
    }
}
int sum_divisor(int arr[],int m)
{
    int count=1;
    unordered_map<int,int>ump;
    for(int i=0;i<m;i++)
    {
        int n=arr[i];
        while(n!=1)
        {
            ump[primes[n]]++;
            n=n/(primes[n]);
        }
    }
    for(auto it:ump)
    {
        count*=((it.second)+1);
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    generate_seive();
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=sum_divisor(arr,n);
        cout<<x<<endl;
    }    
}
