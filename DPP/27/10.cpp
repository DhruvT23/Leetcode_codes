class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;

        for(int i=0; i<m; i++){
            string s = "";
            for(int j=0; j<n; j++){
                s+="#";
            }
            ans.push_back(s);
        }
        for (int j = 0; j < n; j++)
            ans[0][j] = '.';

        for (int i = 1; i < m; i++)
            ans[i][n - 1] = '.';

        return ans;
    }
};