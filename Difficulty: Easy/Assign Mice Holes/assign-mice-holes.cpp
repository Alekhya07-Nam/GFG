class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        sort(mices.begin(), mices.end());
        sort(holes.begin(), holes.end());
        int m=0;
        for(int i=0;i<mices.size();i++){
            m=max(m, abs(mices[i]-holes[i]));
        }
        return m;
    }
};