class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum;
        double sum = 0;
        int i =0;
        int j =0;
        int n = nums.size();
        if(n<k) return -1.0;

        for(int j = 0; j<k;j++){
            sum += nums[j];
        }
        max_sum = sum;
        for(int i =1;i<=n-k;i++){
            sum = sum - nums[i-1];
            sum+=nums[i+k-1];
            cout << sum << endl;
            max_sum = max(max_sum, sum);

        }
        return max_sum/k;
    }
};