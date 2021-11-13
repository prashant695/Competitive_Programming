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
    string s, s2;
    cin >> s;
    vector<int> v;
    s2 = s;
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s2[i])
            v.push_back(i + 1);
    }

    if (v.size() == 0)
        cout << "0\n";
    else
    {
        cout << "1\n";
        cout << v.size() << " ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
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