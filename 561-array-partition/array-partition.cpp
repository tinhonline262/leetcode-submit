class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = l + 1;
        int numsSize = nums.size();
        int result = 0;
        while (r < numsSize) {
            if (nums[l] > nums[r]) {
                result += nums[r];
            } else
                result += nums[l];

            l = r + 1;
            r = l + 1;
        }
        return result;
    }
};