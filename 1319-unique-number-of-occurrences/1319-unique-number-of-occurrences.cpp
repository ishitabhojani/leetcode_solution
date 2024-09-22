class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> s;

        for(int num: arr){
            s[num]++;
        }
        set<int> freq;
        for(auto it : s){
            if(freq.find(it.second) != freq.end()){
                return false;
            }
            freq.insert(it.second);
        }
        return true; 


        
    }
};