class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int size = s.length();
        int spaceSize = spaces.size();
        result.reserve(size + spaceSize);
        int k = 0;
        for (int i = 0; i < size; ++i)
        {
            if (k < spaceSize && i == spaces[k])
            {
                result += ' ';
                k++;
            }
            result += s[i];
        }
        return result;
    }
};