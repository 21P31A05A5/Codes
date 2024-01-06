long long int invertBits(long long int N)
    { 
        // code here
        bitset<32> a(N);
        for(int i=0;i<32;i++)a.flip(i);
        return a.to_ulong();
    }
