#include<bits/stdc++.h>
using namespace std;
bool check(int n,int m,int a[],int b[],int k)
{
    set<int>sa;
    set<int>sb;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
            sa.insert(a[i]);
    }
    if(sa.size()<(k/2))return false;
    for(int i=0;i<m;i++)
    {
        if(b[i]<=k)
            sb.insert(b[i]);
    }
    if(sb.size()<(k/2))return false;
    for(auto i:sb)
    {
        sa.insert(i);
    }
    if(sa.size()<k)return false;
    return true;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        if(check(n,m,a,b,k))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
}
