class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);  // Sentinel bar to flush stack
        int maxArea = 0;
        stack<pair<int, int>> st; // Pair: {height, index}

        for (int i = 0; i < heights.size(); ++i) {
            int start = i;
            while (!st.empty() && st.top().first > heights[i]) {
                int height = st.top().first;
                int index = st.top().second;
                st.pop();
                maxArea = max(maxArea, height * (i - index));
                start = index;  // update start for next push
            }
            st.push({heights[i], start});
        }

        return maxArea;
    }
};