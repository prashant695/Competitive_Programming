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
    long long x, y;
    cin >> x >> y;
    if (x % 2)
        cout << "NO\n";
    else if (x == 0 and y % 2 == 1)
        cout << "NO\n";
    else
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