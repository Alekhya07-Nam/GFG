class Solution:
    
    ''' n : int
        k : int
        Return Type : Boolean '''
    def checkKthBit(self, n, k):
        # Your code here
        a=bin(n).replace("0b","")
        if len(a) <= k:
            return False
        return a[-k-1] == '1'
        