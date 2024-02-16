class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        int n=arr.size();
        unordered_map<int,int>ump;
        for(auto it:arr)
        {
            ump[it]++;
        }    
        vector<pair<int,int>>v;
        for(auto it:ump){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        int s=v.size();
        for(int i=0;i<s;i++){
            int fre=v[i].first;
            if(fre>k){
                return s-i;
            }
            k-=fre;
        }
        return 0;
    }
};
