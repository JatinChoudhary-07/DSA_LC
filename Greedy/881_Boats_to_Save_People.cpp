// LC 881: Boats to Save People
// Topic: Greedy
// Difficulty: Medium
// Approach: Greedy + Two Pointers
// Time: O(n log n)
// Space: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int l = 0, r = people.size() - 1;
        int boats = 0;

        while (l <= r) {
            if (people[l] + people[r] <= limit)
                l++;

            r--;
            boats++;
        }

        return boats;
    }
};
