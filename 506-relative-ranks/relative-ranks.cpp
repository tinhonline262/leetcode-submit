class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int, greater<int>> mp;
        int scoreSize = score.size();
        vector<string> result(scoreSize);
        for (int i = 0; i < scoreSize; ++i){
            mp[score[i]] = i;
        }
        vector<string> tmp = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        int count = 0;
        for (auto it: mp)
        {
            if (count < 3)
            {
                result[it.second] = tmp[count++];
            }
            else result[it.second] = to_string(count++ + 1);
        }
        return result;
    }
};