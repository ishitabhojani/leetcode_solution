class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int k = 0;
        int n;
       
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if((__gcd((to_string(nums[i])[0])- '0',nums[j]%10)) == 1){
                    k++;
                    cout << i << " " << j<< endl;
                } 
            }
        }
        return k;
    }
};