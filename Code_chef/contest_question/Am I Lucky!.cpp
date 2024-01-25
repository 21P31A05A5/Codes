//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int n,boys,k;
        cin>>n>>boys>>k;
        int girls=n-boys;
        int remboys=boys%k;
        int remgirls=girls%k;
        int dance=min(remgirls,remboys);
        // cout<<dance<<" ";
        int read=(remboys+remgirls)-(dance*2);
        cout<<read<<endl;
    }
}
