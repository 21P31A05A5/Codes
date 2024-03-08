bool sameFreq(string s)
	{
	    // code here 
	    vector<int>fre(26,0);
	    for(int i=0;i<s.length();i++) fre[s[i]-'a']++;
	    int c=0;
	    int f=0,sec=0,count1=0,count2=0;
	    for(int i=0;i<26;i++)
	    {
	        if(fre[i]==0) continue;
	        if(f==0||f==fre[i])
	        {
	            f=fre[i];
	            count1++;
	        }
	        else if(sec==0||sec==fre[i])
	        {
	            sec=fre[i];
	            count2++;
	        }
	        else
	        {
	            return 0;
	        }
	    }
	    if(count1==0||count2==0) return 1;
	    if(count1>1&&count2>1) return 0;
	    if(count1==count2){
	        if(sec==(f+1)||sec==(f-1))
	        {
	            return 1;
	        }
	        else
	        {
	            return 0;
	        }
	    }
	    if(count1>count2)
	    {
	        if(sec==1||f==sec-1)
	        {
	            return 1;
	        }
	        else
	        {
	            return 0;
	        }
	    }
	    else
	    {
	        if(f==1||sec==f-1)
	        {
	            return 1;
	        }
	        else
	        {
	            return 0;
	        }
	    }
	    return 0;
	}
