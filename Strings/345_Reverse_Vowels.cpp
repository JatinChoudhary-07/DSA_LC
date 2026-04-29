// LC 345: Reverse Vowels of a String
// Topic: Strings
// Difficulty: Easy
// Approach: Two Pointers
// Time: O(n)
// Space: O(1)

#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }

    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (!isVowel(s[l])) l++;
            else if (!isVowel(s[r])) r--;
            else {
                swap(s[l], s[r]);
                l++, r--;
            }
        }
        return s;
    }
};
