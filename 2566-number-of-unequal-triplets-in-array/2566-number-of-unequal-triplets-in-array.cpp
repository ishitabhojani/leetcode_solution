class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count = 0;
        if(nums.size()<3) return 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            for(int j = i+1; j < nums.size() - 1; j++){
                if(nums[i] != nums[j]){
                    for(int k = j+1; k<nums.size();k++){
                        if(nums[j] != nums[k]){
                            count++;
                        }
                    }
                }

            }
        }
        return count;
        
    }
};