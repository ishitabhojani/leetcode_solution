class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small;
        int large;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        small = nums[0];
        large = nums[n-1];
        int ans;
        for(int i = small; i>=1;i--){
            if(small%i == 0 && large%i ==0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};