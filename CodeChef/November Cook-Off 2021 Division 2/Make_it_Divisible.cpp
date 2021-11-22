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
    lli n, x, one = 0, two = 0, zero = 0, ans = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 3 == 0)
            zero++;
        else if (v[i] % 3 == 1)
            one++;
        else
            two++;
    }
    int k = max(one, two) - min(one, two);

    if (k % 3 == 0)
    {
        cout << min(one, two) + 2 * (k / 3) << endl;
        return;
    }

    cout << "-1\n";
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}
