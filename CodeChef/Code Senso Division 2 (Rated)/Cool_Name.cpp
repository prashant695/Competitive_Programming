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
    string s;
    long res = 0;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        res += (i + 1) * (s[i] - 'a' + 1);
    }
    cout << res << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}