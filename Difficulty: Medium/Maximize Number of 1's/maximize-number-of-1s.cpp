class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
     int n = arr.size();
        int i = 0, j = 0, m = 0;
        int zeros = 0;
        while (j < n) {
            if (arr[j] == 0) zeros++;
            while (zeros > k) {
                if (arr[i] == 0) zeros--;
                i++;
            }
            m = max(m, j - i + 1);
            j++;
        }
        return m;
    }
};
