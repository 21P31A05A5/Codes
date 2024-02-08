//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int n;
        cin>>n;
        int arr[2*n];
        unordered_set<int>st;
        for(int i=0;i<(2*n);i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<(2*n);i++)
        {
            if(st.find(arr[i])!=st.end())
            {
                continue;
            }
            else
            {
                st.insert(arr[i]);
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
}
