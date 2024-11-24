class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.size() == 0) return result;
        vector<vector<int>> intRange;
        vector<int> element = {nums[0]};
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - 1 != nums[i - 1]) {
                intRange.push_back(element);
                element.clear();
                element.push_back(nums[i]);
            } else {
                if (element.size() > 1) {
                    element.pop_back();
                }
                element.push_back(nums[i]);
            }
        }
        intRange.push_back(element);
        for (auto x : intRange) {
            string temp = to_string(x[0]);
            if (x.size() == 1 || x[0] == x[1]) {
                result.push_back(temp);
                continue;
            }
            temp += "->";
            temp += to_string(x[1]);
            result.push_back(temp);
        }
        return result;
    }
};