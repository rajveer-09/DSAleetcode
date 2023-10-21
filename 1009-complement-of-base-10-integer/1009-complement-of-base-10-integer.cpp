class Solution {
public:
    int bitwiseComplement(int n) {
        
        if (n == 0) {
        return 1;  // Special case: bitwise complement of 0 is 1.
    }
        int m=n;
        int mask=0;
        
        while(m!=0){
            mask=(mask<<1)|1;
            
            m=m>>1;
        }
        int ans= (~n)&mask;
        
    return ans;
    }
};