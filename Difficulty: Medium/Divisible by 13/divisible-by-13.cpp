class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int rem=0;
        for(char i: s){
            int digit=i-'0';
            rem=(rem*10+digit)%13;
        }
        if(rem==0){
            return true;
        }
        return false;
    }
};