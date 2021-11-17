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
    lli n = 5, x, p, d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    p = v[0];
    d = v[1];

    for (int i = 0; i < v[4]; i++)
    {
        p += v[2];
        d += v[3];
    }

    if (p < d)
        cout << "PETROL\n";
    else if (p > d)
        cout << "DIESEL\n";
    else
        cout << "SAME PRICE\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}