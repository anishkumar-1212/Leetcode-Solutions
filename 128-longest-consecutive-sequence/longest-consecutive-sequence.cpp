class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int final_count = 0;

        for (int x : seen) {
            if (!seen.count(x - 1)) {
                int curr = x;
                int count = 1;

                while (seen.count(curr + 1)) {
                    curr++;
                    count++;
                }

                final_count = max(final_count, count);
            }
        }

        return final_count;
    }
};
