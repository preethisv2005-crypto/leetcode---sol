class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<int> ans;
        
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};
        
        int r = 0, c = 0, di = 0; 
        
        for (int i = 0; i < m * n; ++i) {
            ans.push_back(matrix[r][c]);
            visited[r][c] = true;
            
            int next_r = r + dr[di];
            int next_c = c + dc[di];
            
           
            if (next_r >= 0 && next_r < m && next_c >= 0 && next_c < n && !visited[next_r][next_c]) {
                r = next_r;
                c = next_c;
            } else {
                di = (di + 1) % 4; 
                r += dr[di];
                c += dc[di];
            }
        }
        
        return ans;
    }
};