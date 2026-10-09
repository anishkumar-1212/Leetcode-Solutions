class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> count;

        count[0] = 1;

        long long prefix = 0;
        int answer = 0;

        for(int x : nums) {
            prefix += x;

            long long need = prefix - k;

            if(count.count(need)) {
                answer += count[need];
            }

            count[prefix]++;
        }

        return answer;
    }
};