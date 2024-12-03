class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        int size1 = list1.size();
        int size2 = list2.size();
        int indexSum = INT_MAX;
        vector<string> result;
        for (int i = 0; i < size2; ++i)
        {
            mp[list2[i]] = i;
        }
        for (int i = 0; i < size1; ++i)
        {
            if (mp.find(list1[i]) != mp.end() && indexSum >= (i + mp[list1[i]]))
            {
                int newIndexSum = i + mp[list1[i]];
                if (newIndexSum < indexSum && result.size() != 0)
                    result.pop_back();
                result.push_back(list1[i]);
                indexSum = newIndexSum;
            }
        }
        return result;
    }
};