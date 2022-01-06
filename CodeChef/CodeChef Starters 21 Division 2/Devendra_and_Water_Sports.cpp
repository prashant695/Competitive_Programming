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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a >= b + c + d + e)
        cout << "YES\n";
    else
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
