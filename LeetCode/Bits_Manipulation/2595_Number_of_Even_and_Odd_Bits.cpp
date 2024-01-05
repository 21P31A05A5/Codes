int even=0;
int odd=0;
for(int i=0;i<32;i++)
{
    if((n&(1<<i)))
    {
        if(i%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
}
return {even,odd};
