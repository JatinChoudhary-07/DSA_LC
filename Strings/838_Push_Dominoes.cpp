// LC 838: Push Dominoes
// Topic: Strings
// Difficulty: Medium
// Approach: Force Simulation
// Time: O(n)
// Space: O(n)

#include <vector>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();

        vector<int> right(n, -1);
        vector<int> left(n, -1);

        int last = -1;

        // nearest R on left
        for (int i = 0; i < n; i++) {
            if (dominoes[i] == 'R')
                last = i;

            else if (dominoes[i] == 'L')
                last = -1;

            right[i] = last;
        }

        last = -1;

        // nearest L on right
        for (int i = n - 1; i >= 0; i--) {
            if (dominoes[i] == 'L')
                last = i;

            else if (dominoes[i] == 'R')
                last = -1;

            left[i] = last;
        }

        string ans = dominoes;

        for (int i = 0; i < n; i++) {

            if (dominoes[i] != '.')
                continue;

            int distR = (right[i] == -1) ? INT_MAX : i - right[i];
            int distL = (left[i] == -1) ? INT_MAX : left[i] - i;

            if (distR < distL)
                ans[i] = 'R';

            else if (distL < distR)
                ans[i] = 'L';
        }

        return ans;
    }
};
