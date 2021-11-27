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
    long long a, b, ans = 0;
    cin >> a >> b;

    if ((a < 0 and a % 2 == -1) or (a >= 0 and a % 2 == 1))
    {
        if (b % 4 == 0)
            ans = 0;
        else if (b % 4 == 1)
            ans = b;
        else if (b % 4 == 2)
            ans = -1;
        else if (b % 4 == 3)
            ans = -(b + 1);
    }
    else if ((a < 0 and a % 2 == 0) or (a >= 0 and a % 2 == 0))
    {
        if (b % 4 == 2)
            ans = 1;
        else if (b % 4 == 1)
            ans = -b;
        else if (b % 4 == 3)
            ans = b + 1;
    }

    cout << ans + a << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}