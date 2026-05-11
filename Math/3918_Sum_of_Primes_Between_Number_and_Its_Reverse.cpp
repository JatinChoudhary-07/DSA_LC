// LC 3918: Sum of Primes Between Number and Its Reverse
// Topic: Math
// Difficulty: Medium
// Approach: Prime Checking + Digit Reversal
// Time: O((r-n)√r)
// Space: O(1)

#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int reverse(int n) {
        int og = n;
        int rev = 0;

        while (og > 0) {
            int digit = og % 10;
            rev = rev * 10 + digit;
            og /= 10;
        }

        return rev;
    }

    int sumOfPrimesInRange(int n) {
        int r = reverse(n);

        int mn = min(n, r);
        int mx = max(n, r);

        int sum = 0;

        for (int i = mn; i <= mx; i++) {
            if (isPrime(i))
                sum += i;
        }

        return sum;
    }
};
