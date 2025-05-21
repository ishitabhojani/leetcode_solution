class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> original = nums;
        sort(nums.begin(), nums.end());
        int large = nums[nums.size()-1];
        int slarge = nums[nums.size()-2];
        if(large >= 2*slarge){
            for(int i =0; i<original.size(); i++){
                if(large == original[i]){
                    return i;
                }
            }
        }
        return -1;

        
    }
};