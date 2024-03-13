class Solution {
public:
    int sum_till_n(int n)
    {
        return n*(n+1)/2;
    }
    int pivotInteger(int n) {
        for(int i=(n/2);i<=n;i++)
        {
            if(sum_till_n(i)==(sum_till_n(n)-sum_till_n(i-1)))return i;
        }
        return -1;
    }
};
