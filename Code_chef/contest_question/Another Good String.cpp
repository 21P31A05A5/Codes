#include <bits/stdc++.h>
using namespace std;
int check(string ss)
{
    int nn=ss.size();
    int count=1;
    int bara=0;
    for(int i=1;i<nn;i++)
    {
        if(ss[i]==ss[i-1])
        {
            count++;
        }
        else
        {
            bara=max(bara,count);
            count=1;
        }
    }
    bara=max(bara,count);
    return bara;
}
int main() 
{
	// your code goes here
    int tt;
    cin>>tt;
    while(tt--)
    {
        int nn,qq;
        cin>>nn>>qq;
        string ss;
        cin>>ss;
        char query[qq];
        for(int i=0;i<qq;i++)
        {
            cin>>query[i];
        }
        int bara=check(ss);
        cout<<bara<<" ";
        string temp="";
        temp+=ss[nn-1];
        for(int i=nn-1;i>=0;i--)
        {
            if(ss[i-1]==ss[i])
            {
                temp+=ss[i-1];
            }
            else
            {
                break;
            }
        }
        int maxi=check(ss);
        // cout<<maxi<<" ";
        int back=temp.size();
        string ram="";
        ram+=ss;
        for(int i=0;i<qq;i++)
        {
            if(query[i]==ram[nn-1])
            {
                back++;
            }
            else
            {
                back=1;
            }
            ram+=(query[i]);
            nn+=1;
            maxi=max(back,maxi);
            cout<<maxi<<" ";
        }
        cout<<endl;
    }
}
