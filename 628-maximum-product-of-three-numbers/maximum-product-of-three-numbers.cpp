class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size() - 1;
        return max(nums[n] * nums[n - 1] * nums[n - 2], nums[0] * nums[1] * nums[n]);
    }
};