class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> se(banned.begin(), banned.end());
        int res = 0;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (se.find(i) == se.end())
            {
                if (res + i <= maxSum)
                {
                    res += i;
                    count++;
                }
            }
        }
        return count;
    }
};