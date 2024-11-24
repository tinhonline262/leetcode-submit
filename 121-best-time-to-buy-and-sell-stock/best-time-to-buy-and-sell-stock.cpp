class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxPrice = INT_MIN;
        int result = 0;
        for (auto x: prices)
        {
            if (x < minPrice)
            {
                minPrice = x;
                maxPrice = minPrice;
            }
            if (x > maxPrice)
            {
                maxPrice = x;
                result = max(maxPrice - minPrice, result);
            }
        }
        return result;
    }
};