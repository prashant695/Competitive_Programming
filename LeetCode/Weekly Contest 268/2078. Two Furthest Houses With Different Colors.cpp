class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int cnt = -1;
        for (int i = 0; i < colors.size(); i++)
        {
            for (int j = i + 1; j < colors.size(); j++)
            {
                if (colors[i] != colors[j])
                {
                    cnt = max(cnt, abs(i - j));
                }
            }
        }
        return cnt;
    }
};