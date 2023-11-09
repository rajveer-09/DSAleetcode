class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
        return false;
    }

    // A number is a power of two if and only if it has exactly one set bit (binary).
    // So, we use the bitwise AND operation to check for this condition.
    return (n & (n - 1)) == 0;
        
    }
};