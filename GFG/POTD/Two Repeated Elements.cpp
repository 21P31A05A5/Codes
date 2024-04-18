vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        int maxi = n+1;
        vector<int> ans;
        for(int i = 0;i<n+2;i++)
        {
            int ind = arr[i]%maxi;
            arr[ind-1] += maxi;
            if((arr[ind-1]/maxi)==2)
                ans.push_back(ind);
        }
        return ans;
    }
