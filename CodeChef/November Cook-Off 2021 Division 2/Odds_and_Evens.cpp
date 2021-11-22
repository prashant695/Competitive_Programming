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
    vector<int> v;
    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    if ((v[0] + v[1]) % 2 == 0)
        cout << "Bob\n";
    else
        cout << "Alice\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}