#include <bits/stdc++.h>
const int M = 1e9 + 7;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define lli long long int
#define endl "\n"
using namespace std;

bool ispali(vector<int> &v, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] != v[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    lli n, x, y;
    cin >> n;
    vector<int> v, v2, v3;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    if (n == 1 or n == 2)
    {
        cout << "YES\n";
        return;
    }
    x = -1, y = -1;
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] != v[n - i - 1])
        {
            x = v[i];
            y = v[n - 1 - i];
            break;
        }
    }

    if (x == -1 and y == -1)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
            v2.push_back(v[i]);
        if (v[i] != y)
            v3.push_back(v[i]);
    }

    if (ispali(v2, v2.size()) or (ispali(v3, v3.size())))
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}