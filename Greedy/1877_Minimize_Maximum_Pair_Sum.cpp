// LC 1877: Minimize Maximum Pair Sum in Array
// Topic: Greedy
// Difficulty: Medium
// Approach: Sorting + Two Pointers
// Time: O(n log n)
// Space: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int l = 0, r = nums.size() - 1;
        int result = 0;

        while (l < r) {
            result = max(result, nums[l] + nums[r]);
            l++, r--;
        }

        return result;
    }
};
