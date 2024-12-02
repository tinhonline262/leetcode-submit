class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int length = sentence.length();
        int result = 1;
        char prefix;
        for (int i = 0; i < length; ++i)
        {
            if (sentence[i] == ' '){
                result++;
                i++;
            }
            if (sentence[i] == searchWord[0] && (i == 0 || sentence[i - 1] == ' ' ))
            {
                int word = searchWord.length();
                int j = 1;
                while (j != word)
                {
                    if (searchWord[j] == sentence[i + j])
                    {
                        j++;
                    }
                    else break;
                }
                if (j == word) return result;
            }
        }
        return -1;
    }
};