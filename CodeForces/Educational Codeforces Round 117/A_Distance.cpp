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
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0)
    {
        if (a % 2 == 0 and b % 2 == 0)
        {
            cout << a / 2 << " " << b / 2 << endl;
        }
        else if (a % 2 == 1 and b % 2 == 1)
        {
            if (a > b)
                cout << (a + b) / 2 - min(a, b) << " " << min(a, b) << endl;
            else
                cout << min(a, b) << " " << (a + b) / 2 - min(a, b) << endl;
        }
    }
    else
    {
        cout << "-1 -1\n";
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