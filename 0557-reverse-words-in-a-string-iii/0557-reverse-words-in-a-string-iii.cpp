class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        int start = 0;
        string word_r = "";
        for(int i = 0; i <= s.size(); i++){
            if(i == s.size() || s[i] == ' ' ){
                //word_r = word_r + word;
                //sen = word_r;
                reverse(s.begin() + start, s.begin() + i);
                //reverse(s.begin(), s.end());
                start = i + 1;
                //word = "";
            }
            //word = word + x;
        }
        return s;
    }
};