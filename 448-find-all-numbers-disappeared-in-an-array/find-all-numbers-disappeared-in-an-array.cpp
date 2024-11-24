class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> danhDau(size + 1, 0);
        vector<int> result;
        for (int i = 0; i < size; ++i)
        {
            danhDau[nums[i]]++;
        }
        for (int i = 0; i < size; ++i)
        {
            if (!danhDau[i + 1])
            {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};