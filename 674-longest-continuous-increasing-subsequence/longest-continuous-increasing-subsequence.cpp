class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0;
        int temp = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] <= nums[i - 1])
            {
                res = max(res, temp);
                temp = 1;
            }
            else {
                temp++;
            }
        }
        return max(res, temp);
    }
};