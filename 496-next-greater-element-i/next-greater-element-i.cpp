class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        vector<int> res(nums1.size(), -1);
        int size1 = nums1.size();
        int size2 = nums2.size();
        for (int i = 0; i < size1; ++i)
        {
            mp[nums1[i]] = i;
        }
        for (int i = 0; i < size2; ++i)
        {
            while (!st.empty() && nums2[i] > st.top())
            {
                int cur = st.top();
                if (mp.find(cur) != mp.end())
                {
                    res[mp[cur]] = nums2[i];
                }
                st.pop();
            }
            st.push(nums2[i]);
        }
        return res;
    }
};