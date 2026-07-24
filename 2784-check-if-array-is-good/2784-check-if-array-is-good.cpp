class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maximum=INT_MIN;
        for(int i : nums) maximum=max(maximum,i);
        unordered_map<int,int> hash;
        for(int i =1;i<=maximum;i++) hash[i]++;
        hash[maximum]++;
        for(int i :nums) hash[i]--;
        for(auto &p:hash){
            if(p.second!=0) return false;
        }
        return true;

    }
};