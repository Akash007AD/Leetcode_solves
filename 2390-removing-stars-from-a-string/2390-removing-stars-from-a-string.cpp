class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.size();
        string ans="";
        for(int i =0;i<n;i++){
            if(s[i]=='*'){
                st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            char ch = st.top();
            ans+=ch;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};