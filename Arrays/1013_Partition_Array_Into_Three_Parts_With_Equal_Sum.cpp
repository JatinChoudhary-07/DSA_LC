// LC 1013: Partition Array Into Three Parts With Equal Sum
// Topic: Arrays
// Difficulty: Easy
// Approach: Prefix Sum + Greedy Partitioning
// Time: O(n)
// Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();

        int total = 0;
        for (int x : arr)
            total += x;

        if (total % 3 != 0)
            return false;

        int target = total / 3;
        int parts = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (sum == target) {
                parts++;
                sum = 0;
            }
        }

        return parts >= 3;
    }
};
