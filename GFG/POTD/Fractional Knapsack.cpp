double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double result=0;
        vector<pair<double,int>>vp;
        for(int i=0;i<n;i++)
        {
            double temp=(arr[i].value)/(double)(arr[i].weight);
            vp.push_back({temp,i});
        }
        sort(vp.rbegin(),vp.rend());
        for(auto it:vp)
        {
            int index=it.second;
            int x=arr[index].weight;
            if(x<=W)
            {
                result+=arr[index].value;
                W=W-x;
            }
            else
            {
                result+=(it.first*W);
                break;
            }
        }
        return result;
    }
