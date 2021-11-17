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
    int x, y;
    cin >> x >> y;
    int a, b;
    a = x, b = y;
    for (int i = x - 2; i >= 0; i--)
        cout << "1 " << x - i << endl;

    y -= (x - 1);

    int j = 3;
    while (y > 0)
    {
        for (int i = 2; j - i >= 1; i++)
        {
            cout << i << " " << j << endl;
            y--;
            if (y == 0)
                return;
        }
        j++;
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