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
    lli n, x, res, f;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    res = v[0];
    for (int i = 1; i < n; i++)
    {
        f = v[i] - v[i - 1];
        if (res < f)
            res = f;
    }
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