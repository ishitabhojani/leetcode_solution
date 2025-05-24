class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0); 
        int maxArea = 0;
        stack<pair<int, int>> st; 

        for (int i = 0; i < heights.size(); ++i) {
            int start = i;
            while (!st.empty() && st.top().first > heights[i]) {
                int height = st.top().first;
                int index = st.top().second;
                st.pop();
                maxArea = max(maxArea, height * (i - index));
                start = index;  
            }
            st.push({heights[i], start});
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        int rows = matrix.size(), cols = matrix[0].size();
        vector<vector<int>> prefix(rows, vector<int>(cols, 0));
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                if (matrix[i][j] == '1') {
                    prefix[i][j] = (i == 0 ? 1 : prefix[i - 1][j] + 1);
                } else {
                    prefix[i][j] = 0;
                }
            }
        } 

        int maxArea = 0;
        for (int i = 0; i < rows; ++i) {
            maxArea = max(maxArea, largestRectangleArea(prefix[i]));
        }

        return maxArea;
    }
};