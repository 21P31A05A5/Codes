//      Prefix Sum Array
#include <iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,15,10};
    int psa[5];
    for(int i=0;i<5;i++)
    {
        if(i==0)
            psa[i]=a[i];
        else
        {
            psa[i]=psa[i-1]+a[i];
        }
    }
    // now  we print prefix sum array
    for(int i=0;i<5;i++)
    {
        cout<<psa[i]<<" ";
    }
    cout<<endl;
}
