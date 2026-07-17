class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        for(auto &p:strs){
            string s = p;
            sort(s.begin(),s.end());
            hash[s].push_back(p);
        }
        vector<vector<string>> ans;
        for(auto &p:hash){
            ans.push_back(p.second);
        }
        return ans;
    }
};