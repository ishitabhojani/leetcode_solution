class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(char i:s){
            map[i]++;
        }

        priority_queue<pair<int, char>> pq;
        for(auto j:map){
            pq.push({j.second, j.first});
        }

        string result;
        while(!pq.empty()){
            auto[val, key] = pq.top();
            pq.pop();
            result.append(val,key);
        }

        return result;
    }
};