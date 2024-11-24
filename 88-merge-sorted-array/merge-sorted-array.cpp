class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0, r = 0;
        if (n == 0) return;
        if (m == 0 && n != 0)
        {
            for (int i = 0; i < n; ++i)
            {
                nums1[i] = nums2[i];
            }
        }
        while (l < m)
        {
            if (nums1[l] <= nums2[r])
            {
                l++;
            }
            else
            {
                swap(nums1[l], nums2[r]);
                l++;
            }
        }
        while (r < n)
        {
            nums1[l++] = nums2[r++];
        }
        sort(nums1.begin(), nums1.end());
    }
};