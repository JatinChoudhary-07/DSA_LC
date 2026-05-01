// LC 2963: Count the Number of Good Partitions
// Topic: Intervals
// Difficulty: Hard
// Approach: Last Occurrence Tracking + Greedy
// Time: O(n)
// Space: O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        const int MOD = 1e9 + 7;

        int n = nums.size();

        unordered_map<int, int> lastIdx;

        for (int i = 0; i < n; i++) {
            lastIdx[nums[i]] = i;
        }

        int i = 0, j = 0;
        int result = 1;

        j = max(j, lastIdx[nums[0]]);

        while (i < n) {
            if (i > j) {
                result = (1LL * result * 2) % MOD;
            }

            j = max(j, lastIdx[nums[i]]);
            i++;
        }

        return result;
    }
};
