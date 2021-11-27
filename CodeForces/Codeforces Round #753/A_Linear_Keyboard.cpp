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
    string x, w;
    cin >> x >> w;
    int cnt = 0;
    map<char, int> m;

    for (int i = 0; i < x.size(); i++)
        m[x[i]] = i + 1;

    for (int i = 1; i < w.size(); i++)
    {
        cnt += abs(m[w[i]] - m[w[i - 1]]);
    }
    cout << cnt << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}