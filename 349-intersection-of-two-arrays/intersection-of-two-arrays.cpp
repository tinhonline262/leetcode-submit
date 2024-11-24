class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> se1(nums1.begin(), nums1.end());
        unordered_set<int> se2(nums2.begin(), nums2.end());
        vector<int> result;
        for (int x: se1)
        {
            if (se2.find(x) != se2.end())
            {
                result.push_back(x);
            }
        }
        return result;
    }
};