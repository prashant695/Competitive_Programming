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
    int n, a = 0, b = 0;
    cin >> n;
    string s, s2;
    cin >> s;

    s2 += s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            s2 += s[i];
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'W')
            a++;
        else
            b++;
    }
    cout << min(a, b) << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}