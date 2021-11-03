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
    vector<int> v, res;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            res.push_back(v[i] & v[i + 1]);
        }
        else if (i == n - 1)
        {
            res.push_back(v[i] & v[i - 1]);
        }
        else
        {
            res.push_back(max(v[i] & v[i + 1], v[i] & v[i - 1]));
        }
    }

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}