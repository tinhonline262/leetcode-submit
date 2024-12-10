class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int m = (l + r)/ 2;
            if (nums[m] == target) return m;
            else if (target > nums[m]) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
};