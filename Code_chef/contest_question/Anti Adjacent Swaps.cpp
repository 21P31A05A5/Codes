//By Pashupati................................//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int stress;
	cin>>stress;
	while(stress--){
        int hum;
        cin >> hum;
        vector<int> ek(hum);
        for (auto &om : ek){
            cin >> om;
        }
        vector<int> dui = ek, teen = ek;
        sort(ek.begin(), ek.end());
        reverse(teen.begin(), teen.end());
        if (hum >= 5 || (ek == dui || (ek == teen && hum > 2))){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}
