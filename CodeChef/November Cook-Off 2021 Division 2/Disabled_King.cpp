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
    if (n % 2 == 0)
        cout << n << endl;
    else
        cout << n - 1 << endl;
}

int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}