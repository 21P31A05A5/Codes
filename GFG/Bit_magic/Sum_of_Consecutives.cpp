long long int canBeSumofConsec(long long int n) 
    { 
        // code here
        if((n&(n-1))==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
