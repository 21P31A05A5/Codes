class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        if(points.size() == 0) return 0;
        sort(points.begin(), points.end());
        int start = points[0][0], end = points[0][1];
        int ans = 1; //we need at least one arrow
        
        for(vector<int>& point : points)
        {
            if(point[0] <= end)
            {
                start = point[0];
                end = min(end, point[1]);
            }
            else
            {
                ans++;
                start = point[0];
                end = point[1];
            }
        }
        return ans;
    }
};
