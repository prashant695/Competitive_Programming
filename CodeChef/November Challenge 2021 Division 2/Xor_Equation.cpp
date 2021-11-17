#include <bits/stdc++.h>
const int M = 1e9 + 7;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define lli long long int
#define endl "\n"
using namespace std;

void solve()
{
    lli n, x, cnt = 0, xorr, tot = 100, res = 0, bit = -1, num, on, off, bit2, on2, off2;
    cin >> n;
    long long o = 1;
    vector<lli> v;
    for (lli i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    while (tot--)
    {
        bit++;
        on = 0, off = 0;
        for (lli i = 0; i < v.size(); i++)
        {
            if (v[i] & (o << bit))
                on++;
            else
                off++;
        }

        if (on & 1)
        {
            on2 = 0;
            off2 = 0;
            bit2 = bit + 1;
            for (lli i = 0; i < v.size(); i++)
            {
                if (v[i] & (o << bit2))
                    on2++;
                else
                    off2++;
            }

            if (off2 == v.size())
            {
                cout << "-1\n";
                return;
            }
        }

        if (on % 2 == 1)
        {
            res += pow(2, bit);
            for (lli i = 0; i < v.size(); i++)
            {
                if (v[i] & (o << bit) == 0)
                    v[i] = v[i] | (o << bit);

                else
                {
                    bit2 = bit;
                    while (bit2 <= 64)
                    {
                        if (v[i] & (o << bit2))
                            v[i] = v[i] & ~(o << bit2), bit2++;
                        else
                            break;
                    }

                    v[i] = v[i] | (o << bit2);
                }
            }
        }
    }
    // if (res < 0 or res > LONG_LONG_MAX)
    //     cout << "-1\n";
    // else
        cout << res << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}
