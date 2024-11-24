class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l = 0, r = 0, n = g.size(), m = s.size();
        while (l < n && r < m)
        {
            if (s[r] >= g[l])
            {
                res++;
                l++;
            }
            r++;
        }
        return res;
    }
};