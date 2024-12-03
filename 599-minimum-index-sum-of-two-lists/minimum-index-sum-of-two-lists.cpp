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
            auto find = mp.find(list1[i]);
            if (find != mp.end() && indexSum >= (i + find->second))
            {
                if (i + find->second < indexSum)
                    result.clear();
                result.push_back(list1[i]);
                indexSum = i + find->second;
            }
        }
        return result;
    }
};