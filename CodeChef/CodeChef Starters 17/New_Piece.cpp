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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c and b == d)
    {
        cout << "0\n";
        return;
    }
    else if ((a + b) % 2 == (c + d) % 2)
    {
        cout << "2\n";
        return;
    }
    else
    {
        cout << "1\n";
    }
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}