vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int i,k=0,l=0;
        while(k<r&&l<c)
        {
            for(i=l;i<c;i++)
            {
                ans.push_back(matrix[k][i]);
            }
            k++;
            for(i=k;i<r;i++)
            {
                ans.push_back(matrix[i][c-1]);
            }
            c--;
            if(k<r)
            {
                for(int i=c-1;i>=l;i--)
                {
                    ans.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(l<c)
            {
                for(int i=r-1;i>=k;i--)
                {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
