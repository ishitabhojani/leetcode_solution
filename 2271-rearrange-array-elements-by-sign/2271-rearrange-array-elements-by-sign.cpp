class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        int ind1 = 0, ind2 = 0;

        vector<int> ans;
        while(ind2<nums.size()/2){
            ans.push_back(positive[ind1]);
            ind1++;
            ans.push_back(negative[ind2]);
            ind2++;
        }
        return ans; 
    }
};