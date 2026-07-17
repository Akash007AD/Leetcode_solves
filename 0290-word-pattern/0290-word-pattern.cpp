class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> st;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                st.push_back(temp);
                temp = "";
            } else
                temp += s[i];
        }
        st.push_back(temp);
        if(st.size()!=pattern.size()) return false;
        unordered_map<char, set<string>> mp1;
        unordered_map<string, set<char>> mp2;
        for (int i = 0; i < pattern.size(); i++) {
            mp1[pattern[i]].insert(st[i]);
            mp2[st[i]].insert(pattern[i]);
        }
        for (auto& p : mp1) {
            if (p.second.size() > 1)
                return false;
        }

        for (auto& p : mp2) {
            if (p.second.size() > 1)
                return false;
        }
        return true;
    }
};