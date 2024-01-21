int vertexCover(int n, vector<pair<int, int>> &edges) 
        {
            int num=1<<n,ans=n,cnt=0,c=0,m=edges.size();
            for(int i=1;i<(num);i++)
            {
                cnt=0;c=0;
                for(int j=0;j<m;j++)
                {
                    int l=1<<(edges[j].first-1);
                    int r=1<<(edges[j].second-1);
                    if(!( (l & i) || (r & i) ))
                    {
                        c=1;
                        break;
                    }
                }
                cnt=__builtin_popcount(i);
                if( c == 0 ) ans=min(cnt,ans); 
            }
            return ans;
        }
