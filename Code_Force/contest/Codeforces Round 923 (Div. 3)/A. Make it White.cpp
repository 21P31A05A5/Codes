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
        string ss;
        cin>>ss;
        int start;
        int end;
        for(int i=0; i<n; i++)
        {
            if(ss[i] == 'B')
            {
                start = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(ss[i] == 'B')
            {
                end = i;
                break;
            }
        }
        cout<<end-start+1<<endl;
    }    
}
