class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i = 0; i<s.size(); i++){
            map<char, int> mp;
            for(int j = i; j<s.size();j++){
                mp[s[j]]++;
                if(j - i >=2){
                    int maxfrq = INT_MIN;
                    int minfrq = INT_MAX;

                    for(auto it : mp){
                        maxfrq = max(maxfrq, it.second);
                        minfrq = min(minfrq, it.second);
                    }

                    ans += (maxfrq - minfrq);
                }
            }
        }
        

        return ans;
    }
};