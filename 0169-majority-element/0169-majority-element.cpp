class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int ct = 1;
        for(int i =0; i<nums.size();i++){
            if(ele ==nums[i]){
                ct++;
            }else ct--;
            if(ct == 0) {ele = nums[i]; ct = 1;}
        }
        return ele;
        // unordered_map<int, int> mp;
        // for (int i = 0; i < nums.size(); i++) {
        //     mp[nums[i]]++;
        // }

        // int maxi = 0;
        // int ans = -1;
        // for (auto i : mp) {
        //     if (i.second > maxi) {
        //         maxi = i.second;
        //         ans = i.first;
        //     }
        // }

        // return ans;
    }
};
