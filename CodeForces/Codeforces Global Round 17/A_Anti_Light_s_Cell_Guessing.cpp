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
    int x, y;
    cin >> x >> y;
    if (x == 1 and y == 1)
        cout << "0\n";
    else if (x == 1 or y == 1)
        cout << "1\n";
    else
        cout << "2\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}