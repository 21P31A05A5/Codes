int bataore(int alpha,int beta){
        while(beta!=0)
        {
            int fuck=beta;
            beta=alpha%beta;
            alpha=fuck;
        }
        return alpha;
    }
    int minimumArrayLength(vector<int>& meraArray) 
    {        
        int result_batao=0;
        int nunu=meraArray.size();
        sort(meraArray.begin(),meraArray.end());
        if(nunu>2&& meraArray[0]!=meraArray[1])return 1;
        int oo=meraArray[0];
        for(auto &it:meraArray){
            oo=bataore(oo,it);
        }
        for(auto &it:meraArray){
            if(it==oo)result_batao++;
        }
        return max(1,(result_batao+1)/2);
    }
