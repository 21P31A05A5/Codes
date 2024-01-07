//1st Approach
def getBinaryRep(self, n):
		# code here
		return format(n,'030b')

//2nd Approach
string getBinaryRep(int N)
    {
        // Write Your Code here    
        string  str;
        int i=0;
        while(i<=29)
        {
            int rem = N%2;
            str += to_string(rem);
            N = N/2;
            i++;
            
        }
        reverse (str.begin(),str.end());
        return  str;
    }


//3rd Approach
string getBinaryRep(int N)
    {
        // Write Your Code here
        string str = "000000000000000000000000000000";
        int j = 29;
        while(N != 0)
        {
            str[j] = (N%2) + '0';
            N /= 2;
            j--;
        }
        return str;
    }
