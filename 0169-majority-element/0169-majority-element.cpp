class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i =0;i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int maxi =0;
        int ans =-1;
        for(auto i :mp){
            if(i.second > maxi){
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};