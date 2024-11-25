class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = INT_MIN;
        int temp = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                result = max(result, temp);
                temp = 0;
            }
            else
                temp++;
        }
        result = max(result, temp);
        return result;
    }
};