class Solution
{
public:
    vector<long long> cnt;
    void fun(vector<long long> &v)
    {
        int n = v.size();
        long long pre[v.size()];
        pre[0] = v[0];

        for (int i = 1; i < v.size(); i++)
            pre[i] = pre[i - 1] + v[i];

        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                cnt[v[i]] = (pre[n - 1] - pre[i]) - (v[i] * (n - 1 - i));
            else if (i == n - 1)
                cnt[v[i]] = (v[i] * i) - (pre[i - 1]);
            else
                cnt[v[i]] = (pre[n - 1] - pre[i]) - (v[i] * (n - 1 - i)) + (v[i] * (i)) - (pre[i - 1]);
        }
    }
    vector<long long> getDistances(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
            cnt.push_back(0);
        vector<vector<long long>> v(100001);

        for (int i = 0; i < arr.size(); i++)
            v[arr[i]].push_back(i);

        for (auto x : v)
        {
            if (x.size() > 0)
                fun(x);
        }

        return cnt;
    }
};