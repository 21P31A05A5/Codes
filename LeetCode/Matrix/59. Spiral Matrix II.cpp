vector<vector<int>> generateMatrix(int n) 
    {
        int r=n,c=n;
        int matrix[n][n];
        vector<vector<int>>ans;
        int i,k=0,l=0;
        int p=1;
        while(k<r&&l<c)
        {
            for(i=l;i<c;i++)
            {
                (matrix[k][i]=p++);
            }
            k++;
            for(i=k;i<r;i++)
            {
                (matrix[i][c-1]=p++);
            }
            c--;
            if(k<r)
            {
                for(int i=c-1;i>=l;i--)
                {
                    (matrix[r-1][i]=p++);
                }
                r--;
            }
            if(l<c)
            {
                for(int i=r-1;i>=k;i--)
                {
                    (matrix[i][l]=p++);
                }
                l++;
            }
        }
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(matrix[i][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
