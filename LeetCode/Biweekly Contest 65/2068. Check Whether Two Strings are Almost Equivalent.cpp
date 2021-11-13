class Solution
{
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {
        int m1[26] = {0}, m2[26] = {0};

        for (int i = 0; i < word1.size(); i++)
            m1[word1[i] - 'a']++;

        for (int i = 0; i < word2.size(); i++)
            m2[word2[i] - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (abs(m1[i] - m2[i]) >= 4)
                return 0;
        }
        return 1;
    }
};