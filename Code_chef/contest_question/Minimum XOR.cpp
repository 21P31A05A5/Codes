//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int n;
        cin>>n;
        int arr[n];
        int xor1=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            xor1=xor1^arr[i];
        }
        if(xor1==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int mini=xor1;
            for(int i=0;i<n;i++)
            {
                mini=min(mini,xor1^arr[i]);
            }
            cout<<mini<<endl;
        }
    }
}
