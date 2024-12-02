class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x: nums)
        {
            mp[x]++;
        }
        int result = 0;
        int size = nums.size();
        for (int i = 0; i < size; ++i)
        {
            int tmp = nums[i];
            if (mp.find(tmp + 1) != mp.end())
            {
                result = max(mp[tmp] + mp[tmp + 1], result);
            }
        }
        return result;
    }
};