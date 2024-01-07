string computeParity(int N) 
    {
        // code here
        return ((bitset<32>(N).count())%2)?"odd":"even";
    }
