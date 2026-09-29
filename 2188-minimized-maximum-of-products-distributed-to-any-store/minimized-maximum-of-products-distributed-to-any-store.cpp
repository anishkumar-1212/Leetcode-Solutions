class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
        int low = 1; 
        int high = *max_element(q.begin(), q.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int stores = 0;

            for (int x : q) {
                // Ceil division to find stores needed for product type x
                stores += (x + mid - 1) / mid; 
            }

            if (stores <= n) {
                ans = mid;       // mid is a valid distribution, try to find a smaller maximum
                high = mid - 1;
            } else {
                low = mid + 1;  // mid is too small, we need a larger maximum
            }
        }
        return ans;
    }
};
