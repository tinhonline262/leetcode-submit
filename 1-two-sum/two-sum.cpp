class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> mp;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            mp.insert({nums[i], i});
        }
        for (auto x: mp)
        {
            int val = target - x.first;
            auto find = mp.find(val);
            if (find != mp.end() && *find != x)
            {
                res.push_back(x.second);
                res.push_back((*find).second);
                break;
            }
        }
        return res;
    }
};