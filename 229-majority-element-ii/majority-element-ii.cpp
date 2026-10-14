class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        int n = nums.size();

        for (int x : nums) {
            freq[x]++;

            if (freq[x] == n / 3 + 1) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
