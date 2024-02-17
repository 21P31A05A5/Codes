class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) 
    {
        int n = h.size();
        priority_queue<int>que;
        int i=0;
        for( ; i<n-1;i++)
        {
            int diff=h[i+1]-h[i];
            if(h[i]>=h[i+1]) continue;

            if(b>=diff)
            {
                b-=diff;
                que.push(diff);

            }
            else if(l>0)
            {
                if(!que.empty())
                {
                    int maxreq = que.top();
                    if(maxreq > diff)
                    {
                        b+=maxreq;
                        que.pop();
                        b-=diff;
                        que.push(diff);
                        l--;
                    }
                    else l--;
                }
                else l--;
            }
            else break;
        }
        return i;
    }
};
