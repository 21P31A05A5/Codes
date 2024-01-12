int count(int n, vector<int> arr,int x)
    {
        // code here
        int setBit=0,mini=INT_MAX;
        for(int i=30;i>=0;i--)
        {
            if(((1<<i)&x)>0)
            {
                setBit|=1<<i;
            }
            else
            {
                int temp=setBit,c=0;
                temp|=1<<i;
                for(int a:arr)
                {
                    if((temp&a)!=temp)
                    {
                        c++;
                    }
                }
                mini=min(mini,c);
            }
        }
        return mini;
    }
