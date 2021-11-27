class Solution
{
public:
    int minCost(vector<int> &startPos, vector<int> &homePos, vector<int> &rowCosts, vector<int> &colCosts)
    {
        if (startPos[0] == homePos[0] and startPos[1] == homePos[1])
            return 0;
        int cnt = 0;
        int x = startPos[0];
        int x2 = homePos[0];
        int y = startPos[1];
        int y2 = homePos[1];

        if (x > x2)
        {
            while (x != x2)
                x--, cnt += rowCosts[x];
        }
        else
        {
            while (x != x2)
                x++, cnt += rowCosts[x];
        }

        if (y > y2)
        {
            while (y != y2)
                y--, cnt += colCosts[y];
        }
        else
        {
            while (y != y2)
                y++, cnt += colCosts[y];
        }
        return cnt;
    }
};