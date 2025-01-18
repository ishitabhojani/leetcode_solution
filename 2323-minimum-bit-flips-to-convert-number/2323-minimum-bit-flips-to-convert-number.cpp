class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int xor_res = start ^ goal;

        while(xor_res>0){
            cnt += xor_res & 1;
            xor_res >>= 1;

        }

        return cnt;

        
    }
};