class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int m1=0,i=0,j=arr.size()-1;
        while(i<j){
            int ar=min(arr[i],arr[j])*(j-i);
            m1=max(ar,m1);
            if(arr[i]<arr[j]){
                i+=1;
            }
            else{
                j-=1;
            }
        }
        return m1;
    }
};
