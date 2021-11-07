class Solution
{
public:
    int res;
    int minimizedMaximum(int n, vector<int> &q)
    {
        int maxx = 100000, s = 0, sum = 0, minn = 1, res = maxx;
        int l = minn, h = maxx, mid, cnt = 0, c;
        while (l + 1 < h)
        {
            mid = l + (h - l) / 2;
            c = 0;
            for (int i = 0; i < q.size(); i++)
            {
                c += ceil(q[i] / (mid * 1.0));
            }
            if (c <= n)
            {
                h = mid;
            }
            if (c > n)
            {
                l = mid;
            }
        }
        c = 0;
        for (int i = 0; i < q.size(); i++)
        {
            c += ceil(q[i] / (l * 1.0));
        }
        if (c <= n)
            return l;
        return h;
    }
};
