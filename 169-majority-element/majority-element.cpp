class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1, vote = 0;
        for (auto x: nums)
        {
            if (vote == 0)
            {
                candidate = x;
                vote++;
            }
            else
            {
                if (x == candidate)
                {
                    vote++;
                }
                else
                    vote--;
            }
        }
        return candidate;
    }
};