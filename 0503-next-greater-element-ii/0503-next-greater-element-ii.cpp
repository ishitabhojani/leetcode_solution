class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Initialize result with -1
        stack<int> st; // Stack to store the next greater elements

        for (int i = 2 * n - 1; i >= 0; --i) {
            int num = nums[i % n];
            
            // Pop elements that are smaller or equal to current
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            // If stack is not empty, the top is the next greater element
            if (!st.empty()) {
                result[i % n] = st.top();
            }

            // Push current element to stack
            st.push(num);
        }

        return result;
    }
};