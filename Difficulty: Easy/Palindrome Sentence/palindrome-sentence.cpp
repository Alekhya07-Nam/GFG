class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string ss="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
                ss+=tolower(s[i]);
            }
            else if(s[i]>='0' and s[i]<='9'){
                ss+=tolower(s[i]);
            }
        }
        string tem=ss;
        reverse(tem.begin(), tem.end());
        if(tem==ss){
            return true;
        }
        return false;
    }
};