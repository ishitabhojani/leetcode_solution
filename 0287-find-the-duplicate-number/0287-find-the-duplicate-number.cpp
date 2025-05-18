class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int i;
        sort(arr.begin(), arr.end());
        for(int j = 0;j<arr.size();j++){
            if(arr[j] == arr[j+1]){
                i = arr[j];
                break;
            }
        }   
        return i;
    }
};