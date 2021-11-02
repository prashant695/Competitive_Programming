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
    lli n, x;
    cin >> n;
    string s;
    vector<int> v, r, b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            r.push_back(v[i]);
        else
            b.push_back(v[i]);
    }

    sort(r.begin(), r.end());
    sort(b.begin(), b.end());

    x = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] < x)
        {
            cout << "NO\n";
            return;
        }
        x++;
    }

    for (int i = 0; i < r.size(); i++)
    {
        if (r[i] > x)
        {
            cout << "NO\n";
            return;
        }
        x++;
    }

    cout << "YES\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}