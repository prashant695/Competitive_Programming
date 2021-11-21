class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int sum = 0, cnt = 0;
        for (int i = 0; i < plants.size(); i++)
        {
            if (sum + plants[i] <= capacity)
            {
                sum += plants[i];
                cnt++;
            }
            else
            {
                sum = plants[i];
                cnt += i + i + 1;
            }
        }
        return cnt;
    }
};