class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x: nums)
        {
            mp[x]++;
        }
        int result = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (mp.find(nums[i] + 1) != mp.end())
            {
                result = max(mp[nums[i]] + mp[nums[i] + 1], result);
            }
        }
        return result;
    }
};