class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256, -1);
        int n = s.size();
        int l =0, r =0, minlen=0;
        int len = 0;

        while(r<n){
            if(map[s[r]]!= -1){
                if(map[s[r]] >= l){
                    l = map[s[r]] +1;
                }
            }
            len = r-l+1;
            minlen = max(len, minlen);

            map[s[r]] = r;
            r++;
        }
        return minlen;
        
    }
};