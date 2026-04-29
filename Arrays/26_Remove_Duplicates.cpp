// LC 151: Reverse Words in a String
// Topic: Strings
// Difficulty: Medium
// Approach: Two Pointers + In-place
// Time: O(n)
// Space: O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int l = 0, r = 0, i = 0;

        while (i < n) {
            while (i < n && s[i] != ' ')
                s[r++] = s[i++];

            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r++] = ' ';
                l = r;
            }
            i++;
        }

        return s.substr(0, r - 1);
    }
};
