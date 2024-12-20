class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            num[nums[i]] = i;
        }

        for(int i = 0; i <n; i++){
            int required = target - nums[i];
            if(num.count(required) && num[required] != i){
                return {i, num[required]};
            }
        }

        return {};
    }
};