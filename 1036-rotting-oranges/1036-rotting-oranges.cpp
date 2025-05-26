class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int n = grid.size(), m = grid[0].size();
        if (n == 0 || m == 0) return 0;

        bool hasFresh = false, hasRotten = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) hasFresh = true;
                if (grid[i][j] == 2) hasRotten = true;
            }
        }
        if (!hasFresh) return 0;


        vector<vector<int>> vis(n, vector<int>(m,0));
        // push all sources inside q
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    vis[i][j] = 1;
                    q.push({i,j});
                }
            }
        }
        int t = 0;
        while(q.size()){
            int sz = q.size();
            for(int i = 0; i<sz; i++){
                int r = q.front().first, c = q.front().second;
                q.pop();
                // traverse in adjaceny of r,c
                int dx[] = {0,0,1,-1};
                int dy[] = {1,-1,0,0};
                for(int i = 0; i<4; i++){
                    int nr = r+dx[i], nc = c + dy[i];
                    if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0 and grid[nr][nc] == 1){
                        vis[nr][nc] = 1;
                        q.push({nr,nc});
                    }
                }
            }
            t++;
        }
        t--;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 1 and vis[i][j] == 0) return -1;
            }
        }
        return t;
    }
};