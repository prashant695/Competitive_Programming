class Solution
{
public:
    int countWords(vector<string> &w1, vector<string> &w2)
    {
        map<string, int> m, m2;
        int cnt = 0;
        for (int i = 0; i < w1.size(); i++)
            m[w1[i]]++;
        for (int i = 0; i < w2.size(); i++)
            m2[w2[i]]++;

        for (auto it : m)
            if (it.second == 1 and m2[it.first] == 1)
                cnt++;

        return cnt;
    }
};