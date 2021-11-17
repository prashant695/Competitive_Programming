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
    lli n, x, no_dup = 0;
    map<int, int> m;
    cin >> n;
    vector<int> v, dup, sing;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        m[x]++;
    }

    for (auto it : m)
    {
        if (it.second >= 3)
        {
            cout << "-1\n";
            return;
        }
        if (it.second > 1)
            no_dup++;
    }

    if (no_dup == 0)
    {
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (m[v[i]] == 2)
        {
            dup.push_back(v[i]);
            m[v[i]]--;
        }
        else
        {
            sing.push_back(v[i]);
        }
    }

    sort(dup.begin(), dup.end());
    sort(sing.begin(), sing.end());
    reverse(sing.begin(), sing.end());

    if (dup[dup.size() - 1] >= sing[0])
    {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < dup.size(); i++)
        cout << dup[i] << " ";

    for (int i = 0; i < sing.size(); i++)
        cout << sing[i] << " ";
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
