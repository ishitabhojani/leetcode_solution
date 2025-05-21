class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        int n = nums.size();
        if(nums[n-2] < nums[n-1]) return n-1;

        int lo =1, hi =n-2;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
                return mid;
            }else if(nums[mid-1] > nums[mid]) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};