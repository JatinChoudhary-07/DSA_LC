// LC 27: Remove Element
// Topic: Arrays
// Difficulty: Easy
// Approach: Two Pointers + Swapping
// Time: O(n)
// Space: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int i = 0, j = n - 1;

        while (i <= j) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;
            }
            else {
                i++;
            }
        }

        return i;
    }
};
