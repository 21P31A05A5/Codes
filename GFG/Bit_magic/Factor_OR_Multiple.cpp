int factorOrMultiple(int N , int X , int A[]) 
    {
        // code here
        int k=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]%X==0)
            {
                k=k|A[i];
            }
        }
        return k;
    }
