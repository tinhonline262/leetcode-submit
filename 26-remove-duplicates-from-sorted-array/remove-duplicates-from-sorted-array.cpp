class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int size = 1;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[size] = nums[i + 1];
                ++size;
            }
        }
        return size;
    }
};