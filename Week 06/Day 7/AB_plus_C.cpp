#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b, c, n;
    cin >> n;
    if (n < 2)
        cout << -1 << endl;
    else
    {
        if (n <= 1e6)
        {
            a = 1;
            b = 1;
            c = n - 1;
            cout << a << " " << b << " " << c << endl;
        }
        else if (n > 1e6)
        {
            long long y = (n - 1) / 1e6;
            long long z = n - y * 1e6;
            cout << 1000000 << " " << y << " " << z << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}