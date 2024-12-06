class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       unordered_set<int> se;
       vector<int> res;
       for (int x: nums)
       {
            if (se.count(x))
                res.push_back(x);
            se.insert(x);
       }
       for (int i = 1; i <= nums.size(); ++i)
       {
        if (!se.count(i)) 
        {
            return {res[0], i};
        }
       }
       return {};
       
    }
};