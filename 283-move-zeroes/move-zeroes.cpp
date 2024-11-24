class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int l = -1, r = 0;
        while (r < size) {
            if (nums[r] != 0) {
                ++l;
                swap(nums[l], nums[r]);
            }
            ++r;
        }
    }
};