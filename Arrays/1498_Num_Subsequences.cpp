// LC 1498: Number of Subsequences That Satisfy the Given Sum Condition
// Topic: Arrays
// Difficulty: Medium
// Approach: Sorting + Two Pointers + Precomputation
// Time: O(n log n)
// Space: O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        const int MOD = 1e9 + 7;

        sort(nums.begin(), nums.end());

        vector<int> power(n);
        power[0] = 1;
        for (int i = 1; i < n; i++)
            power[i] = (power[i - 1] * 2) % MOD;

        int l = 0, r = n - 1;
        int result = 0;

        while (l <= r) {
            if (nums[l] + nums[r] <= target) {
                result = (result + power[r - l]) % MOD;
                l++;
            } else {
                r--;
            }
        }

        return result;
    }
};
