//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int xx,yy;
        cin>>xx>>yy;
        cout<<(xx+yy+(abs(xx-yy))-1)<<endl;
    }
}
