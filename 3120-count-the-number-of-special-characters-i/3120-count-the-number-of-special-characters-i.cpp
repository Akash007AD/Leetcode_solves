class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> hash;
        for(char ch:word) hash[ch]++;
        string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string c = "abcdefghijklmnopqrstuvwxyz";
        int ans=0;
        for(int i =0;i<s.size();i++){
            if(hash[s[i]]>=1 && hash[c[i]]>=1) ans++;
        }
        return ans;
    }
};