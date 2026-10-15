class Solution {
public:
    int minRotations(string s) {
        int prev = 0;
        int ans = 0;
        for (auto const& v : s) {
            int cost = abs((v - '0') - prev);
            prev = v - '0';
            ans += (min(cost, 10 - cost));
        }
        return ans;
    }
};