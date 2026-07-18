class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_map<int,int> hash;
        for(int i : nums1) hash[i]++;
        for(int i:nums2){
            if(hash[i]>=1) return i;
        }
        return -1;

    }
};