class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }

        if ((target + sum) % 2 != 0 || target + sum < 0) {
            return 0;
        }

        int subsetSum = (target + sum) / 2;

        vector<int> dp(subsetSum + 1, 0);
        dp[0] = 1;  

        for (int num : nums) {
            for (int i = subsetSum; i >= num; --i) {
                dp[i] += dp[i - num];
            }
        }

        return dp[subsetSum];
    }
};