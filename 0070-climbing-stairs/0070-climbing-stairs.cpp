class Solution {
public:
    int climbStairs(int n) {
        int prev2=1,prev =1;
        int ans ;
        for(int i =2;i<=n;i++){
            ans = prev2 + prev;
            prev2 = prev;
            prev = ans;
        }
        return prev;
    }
};