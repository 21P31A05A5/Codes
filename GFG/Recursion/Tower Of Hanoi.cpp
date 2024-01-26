long long count=0;
    void TOH(int n,int from,int to,int aux)
    {
        if(n>0)
        {
            TOH(n-1,from,aux,to);
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            count++;
            TOH(n-1,aux,to,from);
        }
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        TOH(N,from,to,aux);
        return count;
    }
