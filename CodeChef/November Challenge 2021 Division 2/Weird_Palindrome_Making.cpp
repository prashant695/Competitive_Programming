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
    lli n, x, odd = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        if (x % 2)
            odd++;
    };

    cout << odd / 2 << endl
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}