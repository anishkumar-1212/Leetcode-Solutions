class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;

        int odd = 0;
        int even = 1;

        int prefix = 0;

        for (int x : arr) {
            prefix += x;

            if (prefix % 2 == 1) {
                // Current prefix is odd.
                // Pair it with previous even prefixes.
                ans += even;
                odd++;
            } 
            else {
                // Current prefix is even.
                // Pair it with previous odd prefixes.
                ans += odd;
                even++;
            }
        }

        return ans % 1000000007;
    }
};