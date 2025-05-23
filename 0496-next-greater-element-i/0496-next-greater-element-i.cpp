class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        st.push(-1);
        unordered_map<int, int> mp;
        for(int i =0 ;i<nums2.size();i++){
            mp[nums2[i]] = i;
        } 
        vector<int> ans(nums1.size(),-1), nge(nums2.size(), -1);
        for(int i = nums2.size()-1;i>=0;i--){
            while(st.size()>0 && nums2[i] >= st.top()) st.pop();
            if(st.size() > 0) nge[i] = st.top();
            st.push(nums2[i]);
        }

        for(int i = 0; i<nums1.size(); i++){
            ans[i] = nge[mp[nums1[i]]];
            
        }
        return ans;
    }
};