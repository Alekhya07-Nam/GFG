class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        for(int i=0;i<mat.size();i++){
            // if(mat[i][0]<=x){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==x){
                    return true;
                }
            // }
            }
        }
        return false;
    }
};
