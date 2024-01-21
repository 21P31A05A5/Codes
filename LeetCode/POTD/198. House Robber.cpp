int rob(vector<int>& arr) {
        int n=arr.size();
        if(n == 1) return arr[0];
	    if(n == 2) return max(arr[0],arr[1]);
	    arr[2] += arr[0];
	    for(int i=3; i<n; i++) {
	        arr[i] += max(arr[i-2],arr[i-3]);
	    }
	   return max(arr[n-2],arr[n-1]);
    }
