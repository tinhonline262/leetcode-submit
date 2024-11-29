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
            int i = it.second;
            if (count < 3)
            {
                result[i] = tmp[count];
            }
            else result[i] = to_string(count + 1);
            count++;
        }
        return result;
    }
};