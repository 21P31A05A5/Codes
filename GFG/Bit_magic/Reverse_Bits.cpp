long long reversedBits(long long n) 
{
        // code here
        ll ans=0;
        ll i=0;
        while(i<32){
            i++;
            if(n&1){
                ans|=1;
            }
            ans<<=1;
            if(n)
            n>>=1;
        }
        return ans>>1;
}
