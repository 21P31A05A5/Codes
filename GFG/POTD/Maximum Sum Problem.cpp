int help(int n)
        {
            if(n==0)return 0;
            int a=max(n/2,help(n/2));
            int b=max(n/3, help(n/3));
            int c=max(n/4, help(n/4));
            return max(n,a+b+c);
        }
        int maxSum(int n)
        {
            //code here.
            return help(n);
        }
