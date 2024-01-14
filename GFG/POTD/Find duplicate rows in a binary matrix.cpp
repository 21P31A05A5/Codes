vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int>v;
        set<vector<int>>st;
        for(int i=0;i<M;i++)
        {
            if(st.find(matrix[i])!=st.end())
            {
                v.push_back(i);
            }
            else
            {
                st.insert(matrix[i]);
            }
        }
        return v;
    }
