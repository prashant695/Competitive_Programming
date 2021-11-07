class Solution
{
public:
    long long countVowels(string word)
    {
        long long s = 0, f = 0, a, b, sz = word.size();
        for (int i = 0; i < sz; i++)
        {
            f = 0;
            if (word[i] == 'a')
                f = 1;
            else if (word[i] == 'e')
                f = 1;
            else if (word[i] == 'i')
                f = 1;
            else if (word[i] == 'o')
                f = 1;
            else if (word[i] == 'u')
                f = 1;

            if (f)
            {
                a = i + 1;
                b = sz - a + 1;

                s += a * b;
            }
        }
        return s;
    }
};