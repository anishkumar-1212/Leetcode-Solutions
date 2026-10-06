class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int x = nums[i];
            int need = target - x;

            if(mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[x] = i;
        }

        return {};
    }
};