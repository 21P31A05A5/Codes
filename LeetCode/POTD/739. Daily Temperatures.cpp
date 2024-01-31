class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) 
    {
        int n=temp.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && temp[i]>temp[st.top()])
            {
                ans[st.top()]=(i-(st.top()));
                st.pop();
            }
            st.push(i);
        }
        return ans;

//brute force,this will give TLE
        // int i=0,j=1;
        // while(i<n && j<n)
        // {
        //     if(temp[i]<temp[j])
        //     {
        //         ans.push_back(j-i);
        //         i++;
        //         j=i+1;
        //     }
        //     else
        //     {
        //         j++;
        //         if(j==n)
        //         {
        //             ans.push_back(0);
        //             i++;
        //             j=i+1;
        //         }
        //     }
        // }
        // ans.push_back(0);
        // return ans;
    }
};
