class Solution {
public:
    bool isThree(int n) {
        int ans;
        for(int i =1; i<=n; i++){
            if(n%i == 0){
                //ans.push_back(i);
                ans++;
            }
        }
        if(ans == 3){
            return true; 
        }else{
            return false;
        }
        
    }
};