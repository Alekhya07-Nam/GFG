class Solution {
  public:
    int fun(string&s, int k){
        // unordered_map<char,int> mpp;
        vector<int> vec(26, 0);
        int num=0;
        int i=0, j=0, cnt=0;
        while(j<s.size()){
            int x=s[j]-'a';
            if(vec[x]==0){
                num+=1;
            }
            vec[x]+=1;
            while(i<=j and num>k){
                int x=s[i]-'a';
                vec[x]-=1;
                if(vec[x]==0){
                    num-=1;
                }
                i++;
            }
            j++;
            cnt+=(j-i)+1;
        }
        return cnt;
    }
    int countSubstr(string& s, int k) {
        int ans1=fun(s, k);
        int ans2=fun(s, k-1);
        return ans1-ans2;
    }
};