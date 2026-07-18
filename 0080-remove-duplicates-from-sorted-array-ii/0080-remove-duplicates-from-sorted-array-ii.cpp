class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> hash;
        for(int i : nums) hash[i]++;
        vector<int> ans;
        for(auto &p:hash){
            if(p.second>=2){
                ans.push_back(p.first);
                ans.push_back(p.first);
            }
            else{
                ans.push_back(p.first);
            }
        }
        nums=ans;
        return ans.size();
    }
};