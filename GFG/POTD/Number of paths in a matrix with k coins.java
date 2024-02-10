int n, k;
    long numberOfPath(int N, int K, int [][]arr) 
    {
        this.n=N;
        this.k=K;
        return helper(0, 0, arr, 0);
    }
    private long helper(int i, int j, int[][] arr, int sum)
    {
        if(i==n || j==n || sum>k)
            return 0 ;
        sum+=arr[i][j];
        if(sum==k && i==n-1 && j==n-1)
        {
           return 1;
        }
        return helper(i, j+1 , arr, sum)+helper(i+1, j, arr, sum);
    }
