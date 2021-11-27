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
    vector<lli> v;
    for (lli i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    lli ans = (v[0] + v[2]) - (2 * v[1]);
    if (ans % 3 == 0)
        cout << "0\n";
    else
        cout << "1\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}