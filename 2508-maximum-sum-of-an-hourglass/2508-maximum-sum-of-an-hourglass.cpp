class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long best = LLONG_MIN;
        for (int i = 0; i + 2 < m; ++i) {
            for (int j = 0; j + 2 < n; ++j) {
                long long sum = grid[i][j] + grid[i][j+1] + grid[i][j+2]
                              + grid[i+1][j+1]
                              + grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
                if (sum > best) 
                best = sum;
            }
        }
        return static_cast<int>(best);
    }
};