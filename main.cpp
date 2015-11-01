class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t tmp = n;
        uint32_t output = 0;
        for(int i = 0; i < 32; i ++){
            output *= 2;
            output += (tmp & 1);
            tmp = tmp >> 1;
        }
        return output;
    }
};
