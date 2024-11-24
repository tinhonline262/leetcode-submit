class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        vector<int> result;
        for (auto x: nums1)
        {
            mp1[x]++;
        }
        for (auto x: nums2){
            mp2[x]++;
        }
        for (auto x: mp1)
        {
            if (mp2.find(x.first) != mp2.end())
            {
                int temp = min(x.second, mp2[x.first]);
                vector<int> v(temp, x.first);
                result.insert(result.end(), v.begin(), v.end());
            }
        }
        return result;
    }
};