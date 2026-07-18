class Solution {
public:
    string getPermutation(int n, int k) {
        string ch;
        for(int i=1;i<=n;i++){
            ch.push_back(i+'0');
        }
        for(int i =1 ;i<k;i++){
            next_permutation(ch.begin(),ch.end());
        }
        return ch;
    }
};