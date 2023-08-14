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
        int n, m, k, h, x;
        cin >> n >> m >> k >> h;
        int a[n], ans = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            x = abs(a[i] - h);
            if (x % k == 0 &&x!=0 && x / k < m)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}