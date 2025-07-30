// User function Template for C++

class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> mpp;
        int s=0,cnt=0;
        mpp[0]=1;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            cnt+=mpp[s-k];
            mpp[s]++;
        }
        return cnt;
    }
};
