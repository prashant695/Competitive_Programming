class Solution
{
public:
    int minimumBuckets(string street)
    {
        int h = 0, o = 0, n = street.size(), cnt = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
            if (street[i] == 'H')
                h++;
            else
                o++;

        if (h == n)
            return -1;
        if (o == n)
            return 0;
        if (street[0] == street[1] and street[0] == 'H')
            return -1;
        if (street[n - 1] == street[n - 2] == 1 and street[n - 1] == 'H')
            return -1;
        for (int i = 0; i < n - 2; i++)
        {
            if (street[i] == street[i + 1] and street[i + 1] == street[i + 2] and street[i] == 'H')
                return -1;
            else if (street[i] == 'H' and street[i + 1] == '.' and street[i + 2] == 'H' and m[i] == 0 and m[i + 2] == 0)
                cnt++, m[i] = 1, m[i + 2] = 1;
        }

        h = 0;
        for (int i = 0; i < n; i++)
            if (street[i] == 'H' and m[i] != 1)
                h++;
        return cnt + h;
    }
};