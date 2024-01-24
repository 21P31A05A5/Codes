//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int ramayan,mahabharat;
        cin>>ramayan>>mahabharat;
        int nirnay=ramayan/mahabharat;
        int yudh=1;
        while(yudh<=mahabharat)
        {
            cout<<nirnay*yudh<<" ";
            yudh++;
        }
        cout<<"\n";
    }
}
