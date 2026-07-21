class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> hash;
        for(char ch : s){
            hash[ch]++;
            if(hash[ch] == 2) return ch; 
        } 
        return 'x';
    }
};