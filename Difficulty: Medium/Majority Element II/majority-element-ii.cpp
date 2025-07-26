class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.''
        int n=arr.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> res;
        for(auto i:mpp)
        {
            if(i.second>(n/3)){
                res.push_back(i.first);
            }
        }
        if(res.size()>0){
            return res;
        }
        else{
            return {};
        }
    }
};
