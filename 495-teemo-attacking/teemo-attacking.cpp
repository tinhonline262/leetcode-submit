class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = duration;
        int size = timeSeries.size();
        for (int i = 1; i < size; ++i) {
            int tmp = timeSeries[i] - timeSeries[i - 1];
            if (tmp < duration) {
                res += tmp;
            } else
                res += duration;
        }
        return res;
    }
};