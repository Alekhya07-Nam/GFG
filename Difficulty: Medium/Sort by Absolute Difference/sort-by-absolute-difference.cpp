class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        // code here
        // sort(arr.begin(), arr.end());
        map<int, vector<int>> mpp;
        for(int i=0;i<arr.size();i++){
            int ans=abs(x-arr[i]);
            mpp[ans].push_back(arr[i]);
        }
        vector<int> ans;
        for(auto i: mpp){
            for(int j=0;j<i.second.size();j++){
                ans.push_back(i.second[j]);
            }
        }
       arr=ans;
    }
};