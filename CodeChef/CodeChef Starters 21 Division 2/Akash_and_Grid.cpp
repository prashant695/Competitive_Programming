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
    int n, a, b;
    cin >> n >> a >> b;
    if (a % 2 and b % 2)
        cout << "0\n";
    else if (a % 2 == 0 and b % 2 == 0)
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