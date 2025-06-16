class Solution {
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int low = *min_element(heights.begin(), heights.end());
        int high = *max_element(heights.begin(), heights.end());
        int ans = INT_MAX, mid;
        while(low<=high){
            mid=(low+high)/2;
            int ansMid=0, ansLeft=0, ansRight=0;
            for(int i=0;i<heights.size();i++){
                ansMid+=abs(mid-heights[i])*cost[i];
            }
            for(int i=0;i<heights.size();i++){
                ansLeft+=abs((mid-1)-heights[i])*cost[i];
            }
             for(int i=0;i<heights.size();i++){
                ansRight+=abs((mid+1)-heights[i])*cost[i];
            }
            ans=min(ans, ansMid);
            if(ansLeft<ansMid){
                high=mid-1;
            }
            else if(ansRight<ansMid){
                low=mid+1;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
