class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        int size = timeSeries.size();
        for (int i = 0; i < size; ++i)
        {
            if (i == 0)
            {
                res = duration;
            }
            else 
            {
                int tmp = timeSeries[i] - timeSeries[i - 1];
                if (tmp < duration)
                {
                    res += tmp;
                }
                else res += duration;
            }
        }
        return res;
    }
};