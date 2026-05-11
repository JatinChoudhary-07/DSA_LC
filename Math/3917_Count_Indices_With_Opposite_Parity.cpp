// LC 3917: Count Indices With Opposite Parity
// Topic: Math
// Difficulty: Easy
// Approach: Brute Force
// Time: O(n²)
// Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();

        vector<int> answer;

        for (int i = 0; i < n; i++) {
            int score = 0;

            int p = (nums[i] % 2 == 0) ? 0 : 1;

            for (int j = i + 1; j < n; j++) {
                if (p == 0) {
                    if (nums[j] % 2 != 0)
                        score++;
                }
                else {
                    if (nums[j] % 2 == 0)
                        score++;
                }
            }

            answer.push_back(score);
        }

        return answer;
    }
};
