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
    lli n, x, k = 0, cnt, res = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    while (v[n - 1])
    {
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
                cnt++;

            v[i] /= 2;
        }

        if (cnt >= 2)
            res += pow(2, k);

        k++;
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