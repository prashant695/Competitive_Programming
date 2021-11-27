#include <bits/stdc++.h>
const int M = 1e9 + 7;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define lli long long int
#define endl "\n"
using namespace std;

static bool cmp(string a, string b)
{
    int cnt = 0, cnt2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
            cnt++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '0')
            cnt2++;
    }

    return cnt > cnt2;
}

void solve()
{
    lli n, m, p, q, f = 0, zero = 0, one = 0, ans = 0;

    cin >> n >> m;
    vector<string> v;
    string s, res;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        res += v[i];
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == '1' and f == 0)
        {
            p = i;
            f = 1;
        }
        if (res[i] == '0')
        {
            q = i;
        }
    }
    // cout << p << " " << q << endl;
    for (int i = q; i >= p; i--)
    {
        if (res[i] == '1')
        {
            one++;
            if (zero)
                ans += zero;
        }
        else
            zero++;
    }
    // cout << res << endl;
    cout << ans << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}