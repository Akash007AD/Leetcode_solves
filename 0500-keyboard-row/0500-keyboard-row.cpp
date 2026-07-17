class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        unordered_map<char, int> first, second, third;

        string f = "qwertyuiop";
        string s = "asdfghjkl";
        string t = "zxcvbnm";

        for (char ch : f)
            first[ch]++;
        for (char ch : s)
            second[ch]++;
        for (char ch : t)
            third[ch]++;

        vector<string> ans;

        for (auto& p : words) {
            bool first_check = true;
            bool second_check = true;
            bool third_check = true;

            for (char ch : p) {
                ch = tolower(ch);
                if (first[ch] != 1)
                    first_check = false;
            }

            for (char ch : p) {
                ch = tolower(ch);
                if (second[ch] != 1)
                    second_check = false;
            }

            for (char ch : p) {
                ch = tolower(ch);
                if (third[ch] != 1)
                    third_check = false;
            }

            if (first_check || second_check || third_check) {
                ans.push_back(p);
            }
        }

        return ans;
    }
};