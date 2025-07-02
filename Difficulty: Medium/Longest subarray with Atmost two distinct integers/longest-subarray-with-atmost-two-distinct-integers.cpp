class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int i=0, j=0, m=0;
        unordered_map<int,int> mpp;
        while(j<arr.size()){
            mpp[arr[j]]++;
            while(mpp.size()>2){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }
            if(mpp.size()<=2){
                m=max(m, (j-i)+1);
            }
            j++;
        }
        return m;
    }
};