int isDivisibleBy10(string bin) {
        // code here
        int sum=0;
        for(int i=0;i<bin.size();i++)
        {
            sum=sum*2+(bin[i]-'0');
            sum=sum%10;
        }
        if(sum==0)
            return 1;
        else
            return 0;
    }
