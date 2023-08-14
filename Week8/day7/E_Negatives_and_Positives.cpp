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
        ll n, i, neg = 0, ans = 0, mini = 1e18, x;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> x;
            if (x < 0)
            {
                neg++;
            }
            ans += abs(x);
            mini = min(mini, abs(x));
        }
        if (neg % 2 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans - 2 * (mini) << endl;
        }
    }

    return 0;
}