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
    int n, a, b, c, minn = INT_MAX, maxx = -1;
    cin >> n >> a >> b;
    c = n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[i + 1] = 1;
    }
    vector<int> v(n, 0);

    v[0] = a;
    m[a]--;
    v[n / 2] = b;
    m[b]--;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            while (m[c] == 0)
                c--;
            v[i] = c;
            m[c]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2 and v[i] < minn)
            minn = v[i];
        if (i >= n / 2 and v[i] > maxx)
            maxx = v[i];
    }
    if (a <= n / 2 and b <= n / 2)
    {
        cout << "-1\n";
        return;
    }
    if (a > n / 2 and b > n / 2)
    {
        cout << "-1\n";
        return;
    }

    if (minn != a or maxx != b)
    {
        cout << "-1\n";
        return;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}
int main(void)
{
    fast;
    lli t;
    cin >> t;
    while (t--)
        solve();
}