class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int nkadane = INT_MIN, cursum =0;
        for(int i =0; i<nums.size(); i++){
            cursum += nums[i];
            nkadane = max(cursum, nkadane);
            if(cursum < 0) cursum = 0;

        }
        int rkadane = INT_MAX, totsum = 0;
        cursum = 0;
        for(int i = 0;i<nums.size();i++){
            totsum += nums[i];
            cursum += nums[i];
            rkadane = min(rkadane, cursum);
            if(cursum>0) cursum =0;
        }
        
        if(totsum == rkadane) return nkadane;
        return max(nkadane, totsum-rkadane);
        
    }
};