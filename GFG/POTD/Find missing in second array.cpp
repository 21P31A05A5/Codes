vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    unordered_map<int,int>map;
        for(int i=0;i<m;i++)
        {
            map[b[i]]=1;
        }
     
        vector<int>ans;
     
        for(int i=0;i<n;i++){
            if(map.find(a[i])==map.end()){
                ans.push_back(a[i]);
            }
        }
        return ans;
	} 
