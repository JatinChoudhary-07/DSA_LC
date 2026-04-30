// LC 342: Power of Four
// Topic: Bit Manipulation
// Difficulty: Easy
// Approach: Bit Manipulation
// Time: O(1)
// Space: O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 &&
               !(n & (n - 1)) &&
               (n - 1) % 3 == 0;
    }
};
