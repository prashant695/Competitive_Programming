class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        long long n = nums.size(), pre[n];
        vector<int> res;
        
        pre[0] = nums[0];
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + nums[i];

        for (int i = 0; i < n; i++)
        {
            if (i - k >= 0 and i + k < n)
            {
                if (i - k == 0)
                    res.push_back(pre[i + k] / (2 * k + 1));
                else
                    res.push_back((pre[i + k] - pre[i - k - 1]) / (2 * k + 1));
            }
            else
                res.push_back(-1);
        }

        return res;
    }
};