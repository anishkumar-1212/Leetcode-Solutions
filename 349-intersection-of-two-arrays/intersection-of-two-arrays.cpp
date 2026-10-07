class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        unordered_set<int> ans;

        for (int x : nums1) {
            if (!seen.count(x)) {
                seen.insert(x); //{1,2}
            }
        }

        for (int x : nums2) {
            if (seen.find(x) != seen.end()) {
                ans.insert(x);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};