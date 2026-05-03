// LC 763: Partition Labels
// Topic: Greedy
// Difficulty: Medium
// Approach: Greedy + Last Occurrence Tracking
// Time: O(n)
// Space: O(1)

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();

        vector<int> last_index(26, 0);

        for (int i = 0; i < n; i++) {
            last_index[s[i] - 'a'] = i;
        }

        vector<int> ans;

        int start = 0, end = 0;

        for (int i = 0; i < n; i++) {
            end = max(end, last_index[s[i] - 'a']);

            if (i == end) {
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }

        return ans;
    }
};
