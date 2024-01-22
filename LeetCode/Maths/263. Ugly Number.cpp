bool isUgly(int n) 
    {
        if(n<=0)return false;
        if(n==1)return true;
        int arr[3]={2,3,5};
        int i=0;
        while(n!=1)
        {
            if(n%arr[i]==0)
            {
                n=n/arr[i];
            }
            else
            {
                if(i==2)
                {
                    return false;
                }
                else i++;
            }
        }
        return true;
    }


//2nd Approach

bool isUgly(int n) {
        if(n<=0) return false;
        while(n!=1){
            if(n%2==0){
                n/=2;
            }else if(n%3==0){
                n/=3;    
            }else if(n%5==0){
                n/=5;
            }
            else return false;
        }return true;
    }
