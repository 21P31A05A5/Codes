vector<int> factorial(int N)
    {
        // code here
        vector<int>result;
        result.push_back(1);
        int carry=0;
        for(int i=2;i<=N;i++)
        {
            for(int j=0;j<result.size()||carry;j++)
            {
                if(j==result.size())
                {
                    result.push_back(0);
                }
                int product=result[j]*i+carry;
                result[j]=product%10;
                carry=product/10;
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
