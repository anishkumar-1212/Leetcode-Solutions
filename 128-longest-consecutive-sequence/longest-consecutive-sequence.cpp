class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;

        for(int x : nums) {
            seen.insert(x);
        }

        int longest = 0;

        for(int x : seen) {

            // x is the beginning of a sequence
            if(!seen.count(x - 1)) {

                int count = 1;

                while(seen.count(x + count)) {
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};