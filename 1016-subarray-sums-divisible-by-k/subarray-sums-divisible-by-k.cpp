
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;

        int prefix = 0;
        int answer = 0;

        for (int x : nums) {
            prefix += x;

            int rem = prefix % k;

            // Normalize negative remainders
            if (rem < 0) {
                rem += k;
            }

            answer += freq[rem];
            freq[rem]++;
        }

        return answer;
    }
};
