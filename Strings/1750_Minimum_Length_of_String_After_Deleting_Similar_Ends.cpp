// LC 1750: Minimum Length of String After Deleting Similar Ends
// Topic: Strings
// Difficulty: Medium
// Approach: Two Pointers
// Time: O(n)
// Space: O(1)

#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();

        int left = 0, right = n - 1;

        while (left < right && s[left] == s[right]) {
            char c = s[left];

            while (left < right && s[left] == c) {
                left++;
            }

            while (left <= right && s[right] == c) {
                right--;
            }
        }

        return right - left + 1;
    }
};
