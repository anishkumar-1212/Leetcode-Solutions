class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        // Find first occurrence
        int first = 0;
        int last = n - 1;
        int first_occ = -1;

        while (first <= last) {
            int mid = (first + last) / 2;

            if (nums[mid] == target) {
                first_occ = mid;
                last = mid - 1;       // search left
            }
            else if (nums[mid] < target) {
                first = mid + 1;      // search right
            }
            else {
                last = mid - 1;       // search left
            }
        }

        // Find last occurrence
        first = 0;
        last = n - 1;
        int last_occ = -1;

        while (first <= last) {
            int mid = (first + last) / 2;

            if (nums[mid] == target) {
                last_occ = mid;
                first = mid + 1;      // search right
            }
            else if (nums[mid] < target) {
                first = mid + 1;      // search right
            }
            else {
                last = mid - 1;       // search left
            }
        }

        return {first_occ, last_occ};
    }
};