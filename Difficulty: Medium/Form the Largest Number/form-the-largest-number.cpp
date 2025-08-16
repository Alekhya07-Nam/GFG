class Solution {
  public:
    static bool cmp(string &a, string &b){
        return a+b>b+a;
    }
    string findLargest(vector<int> &arr) {
        vector<string> vec;
        for(int i:arr){
            vec.push_back(to_string(i));
        }
        sort(vec.begin(), vec.end(), cmp);
        if(vec[0] == "0") return "0";
        string res="";
        for(string i:vec){
            res+=i;
        }
        return res;
    }
};