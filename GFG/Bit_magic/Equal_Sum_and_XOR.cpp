int countValues (int n)
{
   //Your code here 
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       if((n+i)==(n^i))
            cnt++;
   }
   return cnt;
}
