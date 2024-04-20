vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>ans;
        set<int>s(arr1,arr1+n);
        for(int i=0;i<m;i++)
        {
            s.insert(arr2[i]);
        }
        for(auto i=s.begin();i!=s.end();i++)
        {
            ans.push_back(*i);
        }
        return ans;
    }
