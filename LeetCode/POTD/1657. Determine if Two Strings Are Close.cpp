bool closeStrings(string word1, string word2) 
    {
        vector<int>freqw1(26,0),freqw2(26,0);
        vector<int>ispresentw1(26,0),ispresentw2(26,0);
        for(char c:word1)
        {
            freqw1[c-'a']++;
            ispresentw1[c-'a']=1;
        }
        for(char c:word2)
        {
            freqw2[c-'a']++;
            ispresentw2[c-'a']=1;
        }
        sort(freqw1.begin(),freqw1.end());
        sort(freqw2.begin(),freqw2.end());
        return freqw1==freqw2 && ispresentw1==ispresentw2;
    }
