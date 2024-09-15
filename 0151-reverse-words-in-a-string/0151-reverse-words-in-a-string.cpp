class Solution {
public:
    string reverseWords(string s) {
        stack<string> stc;
        string temp = "";
        
       
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                if (!temp.empty()) {
                    stc.push(temp);  
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
        
        
        if (!temp.empty()) {
            stc.push(temp);
        }
        
        string result = "";
        
       
        while (!stc.empty()) {
            result += stc.top();  
            stc.pop();
            
            if (!stc.empty()) {
                result += " ";  
            }
        }
        
        return result;
    }
};
