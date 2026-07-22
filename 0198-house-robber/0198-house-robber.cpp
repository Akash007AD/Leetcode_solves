class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp;
        dp.push_back(nums[0]);
        dp.push_back(max(nums[1],nums[0]));
        for(int i =2;i<n;i++){
            int take = dp[i-2] + nums[i];
            int skip = dp[i-1];
            dp.push_back(max(take,skip));
        }
        return dp[n-1];
    }
};