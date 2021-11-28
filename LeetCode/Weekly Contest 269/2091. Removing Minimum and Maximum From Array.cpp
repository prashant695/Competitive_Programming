class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int minn = INT_MAX, maxx = INT_MIN, posminn, posmaxx, res = INT_MAX, n = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < minn)
                minn = nums[i], posminn = i;
            if (nums[i] > maxx)
                maxx = nums[i], posmaxx = i;
        }

        int a = max(posminn, posmaxx) + 1;
        int b = max(n - posminn, n - posmaxx) + 1;
        int c = (posminn - 0) + (n - posmaxx) + 2;
        int d = (posmaxx - 0) + (n - posminn) + 2;

        res = min(a, min(b, min(c, d)));
        return res;
    }
};