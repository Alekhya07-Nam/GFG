class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int cnt=0;
        for(int i=arr.size()-1;i>=2;i--){
            int x=0, y=i-1;
            while(x<y){
                if(arr[x]+arr[y]> arr[i]){
                    cnt+=y-x;
                    y--;
                }
                else{
                   x++; 
                }
            }
        }
        return cnt;
    }
};
