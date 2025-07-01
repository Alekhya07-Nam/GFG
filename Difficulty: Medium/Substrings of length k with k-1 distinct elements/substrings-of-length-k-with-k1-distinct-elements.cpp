class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int i=0, j=0, cnt=0;
        unordered_map<char,int> mpp;
        while(j<s.size()){
            mpp[s[j]]++;
            if(j-i+1==k){
                if(mpp.size()==k-1){
                    cnt++;
                }
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        return cnt;
    }
};