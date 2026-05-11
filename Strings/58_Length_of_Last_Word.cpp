// LC 58: Length of Last Word
// Topic: Strings
// Difficulty: Easy
// Approach: Reverse Traversal
// Time: O(n)
// Space: O(1)

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();

        int i = n - 1;
        int len = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
