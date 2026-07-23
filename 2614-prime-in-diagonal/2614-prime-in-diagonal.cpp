class Solution {
public:
    bool isprime(int n){
        if(n < 2) return false;
        for(int i =2;i*i<=n;i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        int ans =0;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if((i==j || (i+j) == m-1) && isprime(nums[i][j])){
                    ans = max(ans,nums[i][j]);
                }
            }
        }
        return ans;
    }
};