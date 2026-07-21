class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        k = k% (m*n);
        vector<int> vals;
        for(auto &row: grid){
            for(int i: row) vals.push_back(i);
        }
        reverse(vals.begin(),vals.end());
        reverse(vals.begin(),vals.begin()+k);
        reverse(vals.begin()+k,vals.end());
        vector<vector<int>> ans;
        int p =0;
        for(int i =0;i<m;i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                v.push_back(vals[p++]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};