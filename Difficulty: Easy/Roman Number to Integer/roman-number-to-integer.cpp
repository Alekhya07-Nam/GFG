class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
       map<char,int> mpp;
       mpp['I']=1, mpp['V']=5, mpp['X']=10, mpp['L']=50, mpp['C']=100, mpp['D']=500,
       mpp['M']=1000;
        int i=0, total=0;
        while(i<(s.size()-1))
        {
            if(mpp[s[i]]<mpp[s[i+1]]){
               total-=mpp[s[i]];
            }
            else{
                total+=mpp[s[i]];
            }
            i++;
        }
        total+=mpp[s[s.size()-1]];
        return total;
    }
};