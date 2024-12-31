class Solution {
public:
    bool isPrime(int n) {
        if(n==1) return false;
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        int n = nums[0].size();
        int m;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n;j++){
                if(i == j){
                    m = nums[i][j];
                    if(isPrime(m)){
                        ans = max(ans, m);
                    } 
                }else if(i+j == n-1){
                    m = nums[i][j];
                    if(isPrime(m)){
                        ans = max(ans, m);
                    } 
                }
                
            }
        }
        return ans;
    }
};