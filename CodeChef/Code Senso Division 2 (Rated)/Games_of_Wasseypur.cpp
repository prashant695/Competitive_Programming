#include <bits/stdc++.h>
const int M = 1e9 + 7;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define lli long long int
#define endl "\n"
using namespace std;
int dp[100001] = {0};

void solve()
{
    lli n, cnt = 1;
    // 1- sahid
    // 0 - ramadhir
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }
    if (dp[cnt - 1] == 1)
        cout << "SAHID\n";
    else
        cout << "RAMADHIR\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 0;
    for (int i = 2; i < 100001; i++)
    {
        dp[i] = max(!dp[i - 1], !dp[i - 2]);
    }
    while (t--)
    {
        solve();
    }
}