class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        vector<int> ans;
        sort(arr.begin(), arr.end(), [x](int a,int b){
            int a1=abs(a-x);
            int b1=abs(b-x);
            if(a1==b1){
                return a>b;
            }
            return a1<b1;
        });
        for(auto i: arr){
            if(i!=x and k>0){
                ans.push_back(i);
                k--;
            }
        }
        return ans;
    }
};