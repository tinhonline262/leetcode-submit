class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> keyboards = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char, int> mp;
        vector<string> result;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < keyboards[i].length(); ++j)
            {
                mp[keyboards[i][j]] = i;
            }
        }
        for (int i = 0; i < words.size(); ++i)
        {
            int check = mp[(char)tolower(words[i][0])];
            for (int j = 1; j < words[i].length(); ++j)
            {
                if (mp[(char)tolower(words[i][j])] != check)
                {
                    check = -1;
                    break;
                }
            }
            if (check != -1) result.push_back(words[i]);
        }

        return result;
    }
};