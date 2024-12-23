class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int current = 1;
        for(int i =0; i<nums.size(); i++){
            current = current*nums[i];

            if(current>max){
                max = current;
            }
            if(current == 0){
                current = 1;
            }
        }

        current = 1;
        for(int i =nums.size()-1; i>=0; i--){
            current = current*nums[i];

            if(current>max){
                max = current;
            }
            if(current == 0){
                current = 1;
            }
        }
        return max;        
    }
};