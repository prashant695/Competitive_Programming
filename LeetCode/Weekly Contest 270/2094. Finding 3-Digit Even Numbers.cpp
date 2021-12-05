class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        vector<int> res;
        sort(digits.begin(), digits.end());
        unordered_map<int, int> m;
        int n = digits.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    for (int k = 0; k < n; k++)
                    {
                        if (i == k or j == k)
                            continue;
                        if (digits[i] == 0 or digits[k] % 2)
                            continue;
                        int x = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (m[x] == 0)
                            res.push_back(x), m[x] = 1;
                    }
            }
        }
        return res;
    }
};