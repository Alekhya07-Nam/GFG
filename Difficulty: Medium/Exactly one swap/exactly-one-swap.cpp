class Solution {
  public:
    int countStrings(string &s) {
        // code here
        map<char,int> mpp;
        for(char i: s){
            mpp[i]++;
        }
        int n=s.size();
        int total=n*(n-1)/2;
        int temp=0;
        for(auto i:mpp){
            if(i.second>1){
                int l=i.second;
                temp+=(l*(l-1))/2;
            }
        }
        if(temp>0){
            return total-temp+1;
        }
        return total;
    }
};
