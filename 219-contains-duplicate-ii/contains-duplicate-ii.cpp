class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> se;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i > k)
            {
                se.erase(nums[i - k - 1]);
            }
            if (se.find(nums[i]) != se.end())
            {
                return true;
            }
            se.insert(nums[i]);
        }
        return false;
    }
};