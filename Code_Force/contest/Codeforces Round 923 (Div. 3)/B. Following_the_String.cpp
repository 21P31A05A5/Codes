#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        int lost[n];
        for(int i=0;i<n;i++)
        {
            cin>>lost[i];
        }
        string ans="";
        unordered_map<int,int>ump;
        string temp="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<n;i++)
        {
            ump[lost[i]]++;
            ans+=temp[ump[lost[i]]-1];
        }
        cout<<ans<<endl;
    }
    
}
