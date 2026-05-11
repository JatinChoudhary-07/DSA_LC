// LC 189: Rotate Array
// Topic: Arrays
// Difficulty: Medium
// Approach: Extra Array Simulation
// Time: O(n)
// Space: O(n)

#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> nums2(n);

        k = k % n;

        for (int i = 0; i < n; i++) {
            nums2[i] = nums[i];
        }

        nums2.insert(nums2.end(), nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            nums[i] = nums2[i + n - k];
        }
    }
};
