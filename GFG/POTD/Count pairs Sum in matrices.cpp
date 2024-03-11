int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int len = n*n-1;
        int i=0;
        int j=len;
        int count = 0;
        while(i<=len && j>=0)
        {
            int row1 = i/n;
            int col1 = i%n;
            
            int row2 = j/n;
            int col2 = j%n;
     
            int sum = mat1[row1][col1]+mat2[row2][col2];
            if(sum==x)
            {
                count++;
                i++;
                j--;
            }
            else if(sum<x){
                i++;
            }
            else j--;
        }
        return count;
	}
