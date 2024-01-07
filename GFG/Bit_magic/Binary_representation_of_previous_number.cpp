#1st Approach
def binaryPreviousNumber(self, S):
		# code here
		x = int(S,2)
    return bin(x-1)[2:]
        

#2nd Approach
def binaryPreviousNumber(self, S):
		# code here
    a=int(S,2)-1
    res=bin(a).replace('0b','')
    return res
