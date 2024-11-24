class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool result = false;
        unordered_set<int> digits;
        for (int x: nums)
        {
            if (digits.find(x) != digits.end())
            {
                result = true;
            }
            digits.insert(x);
        }
        return result;
    }
};