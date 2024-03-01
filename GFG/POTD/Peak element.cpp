int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i=1; i<n-1; i++)
       {
           if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])return i;
       }
       return arr[0]>arr[n-1]? 0 : n-1;
    }
