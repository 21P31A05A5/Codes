int nthUglyNumber(int n) 
    {
        vector<int>arr(n+1);
        int a2,a3,a5;
        a2=a3=a5=1;
        arr[1]=1;
        for(int i=2; i<=n ; i++){
            int ug2= 2*arr[a2];
            int ug3= 3*arr[a3];
            int ug5= 5*arr[a5];
            int minUg = min({ug2,ug3,ug5});
            arr[i]=minUg;
            if(minUg==ug2)a2++;
            if(minUg==ug3)a3++;
            if(minUg==ug5)a5++;
        }
        return arr[n];
    }
