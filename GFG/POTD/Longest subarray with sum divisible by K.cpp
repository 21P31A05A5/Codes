int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>mpp;
	    mpp[0]=-1;
	    int sum=0;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	        int rem=sum%k;
	        if(rem<0){
	            rem+=k;
	        }
	        if(mpp.find(rem)!=mpp.end()){
	            ans=max(ans,i-mpp[rem]);
	        }else{
	            mpp[rem]=i;
	        }
	    }
	    return ans;
	}
