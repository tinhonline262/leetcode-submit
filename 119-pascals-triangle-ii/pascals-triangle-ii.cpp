class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>result(rowIndex + 1, 1);
        for (int i = 2; i < rowIndex + 1; ++i)
        {
            for (int j = 1; j < i; ++j)
            {
                result[i - j] += result[i - j - 1];
            }
        }
        return result;
    }
};