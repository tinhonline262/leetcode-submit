class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int res = 0;
        for (int i = 0; i < k; ++i)
        {
            res += nums[i];
        }
        int maxX = res;
        for (int i = k; i < nums.size(); ++i)
        {
            res = (res - nums[i - k] + nums[i]);
            maxX = max(maxX, res);
        }
        return (double)maxX/k;
    }
};