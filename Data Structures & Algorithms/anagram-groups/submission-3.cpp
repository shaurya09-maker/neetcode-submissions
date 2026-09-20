class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        vector<vector<string>> ans;
      for(auto s : strs){
        string temp = s;
        sort(s.begin(), s.end());
        res[s].push_back(temp);
      }
      for(auto s : res){
        ans.push_back(s.second);
      }return ans ;
}
};