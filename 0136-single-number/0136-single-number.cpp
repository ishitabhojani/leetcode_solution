class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto x : nums){
            map[x]++;
        }

        int result;
        for(auto x : map){
            if(x.second%2 == 1){
                result = x.first;
                break;
            }
        }
        return result;
        
    }
};