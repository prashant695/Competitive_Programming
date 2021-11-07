class Solution
{
public:
    int fun(string &s)
    {
        int a = 0, e = 0, ii = 0, o = 0, u = 0, flg = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
                a++;
            else if (s[i] == 'e')
                e++;
            else if (s[i] == 'i')
                ii++;
            else if (s[i] == 'o')
                o++;
            else if (s[i] == 'u')
                u++;
            else
                flg = 1;
        }
        return (a > 0 && e > 0 && ii > 0 && o > 0 && u > 0 && flg == 0);
    }
    int countVowelSubstrings(string word)
    {
        int cnt = 0;
        string s = "";
        for (int i = 0; i < word.size(); i++)
        {
            s = word[i];
            for (int j = i + 1; j < word.size(); j++)
            {
                s += word[j];
                cnt += fun(s);
            }
        }
        return cnt;
    }
};