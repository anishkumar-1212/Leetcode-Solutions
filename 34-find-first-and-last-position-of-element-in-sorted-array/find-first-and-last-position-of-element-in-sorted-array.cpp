
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if (nums.empty()) {
            return {-1, -1};
        }

        int lower_bound = -1;
        int upper_bound = -1;

        // 1. Find the first occurrence
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                if (nums[mid] == target) {
                    lower_bound = mid;
                }
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Target does not exist
        if (lower_bound == -1) {
            return {-1, -1};
        }

        // 2. Find the last occurrence
        left = 0;
        right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= target) {
                if (nums[mid] == target) {
                    upper_bound = mid;
                }
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {lower_bound, upper_bound};
    }
};
