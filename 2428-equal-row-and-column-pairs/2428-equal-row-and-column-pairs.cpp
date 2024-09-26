class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        map<vector<int>, vector<string>>map;

        for(int i =0; i<n; i++){
            map[grid[i]].push_back("r");
        }

        for(int j =0; j<m;j++){
            vector<int> res;
            for(int i= 0; i<n;i++){
                res.push_back(grid[i][j]);
            }
            map[res].push_back("c");
        }

        int count = 0;
        for(auto x:map){
            vector<string>res = x.second;
            if(res.size() > 1){
                int a = std::count(res.begin(), res.end(), "r");
                int b = std::count(res.begin(), res.end(), "c");
                count += a*b;
            }
        }
        return count;

        
    }
};