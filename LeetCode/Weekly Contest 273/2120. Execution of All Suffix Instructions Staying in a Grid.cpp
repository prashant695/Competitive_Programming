class Solution
{
public:
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {
        vector<int> res;
        int y = startPos[0];
        int x = startPos[1];
        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            cnt = 0;
            y = startPos[0], x = startPos[1];
            for (int j = i; j < s.size(); j++)
            {

                if (s[j] == 'U')
                    y--;
                if (s[j] == 'D')
                    y++;
                if (s[j] == 'R')
                    x++;
                if (s[j] == 'L')
                    x--;

                if (x < 0 or y < 0 or x >= n or y >= n)
                {
                    break;
                }
                else
                    cnt++;
            }

            res.push_back(cnt);
        }
        return res;
    }
};