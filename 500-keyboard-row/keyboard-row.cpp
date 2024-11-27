class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> keyboards = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char, int> mp;
        vector<string> result;

        for (int i = 0; i < 3; ++i)
        {
            int keySize = keyboards[i].length();
            for (int j = 0; j < keySize; ++j)
            {
                mp[keyboards[i][j]] = i;
            }
        }
        int wordsSize = words.size();
        for (int i = 0; i < wordsSize; ++i)
        {
            int check = mp[(char)tolower(words[i][0])];
            int wordSize = words[i].length();
            for (int j = 1; j < wordSize; ++j)
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