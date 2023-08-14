#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n + 1], pre[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        pre[0] = 0;
        for (ll i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + a[i];
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll x = pre[r] - pre[l - 1];
            if ((pre[n] - x + (r - l + 1) * k) % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}