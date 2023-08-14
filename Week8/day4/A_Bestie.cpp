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
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        int GCD = x[0];
        for (int i = 1; i < n; i++)
        {
            GCD = __gcd(GCD, x[i]);
        }
        if (GCD == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int tmp = x[i];
                x[i] = __gcd(x[i], i + 1);
                int g = x[0];
                for (int j = 0; j < n; j++)
                {
                    g = __gcd(g, x[j]);
                }
                if (g == 1)
                {
                    ans = min(ans, n - i);
                }
                x[i] = tmp;
            }

            for (int i = 0; i < n; i++)
            {
                int tmp = x[i];
                x[i] = __gcd(x[i], i + 1);
                for (int j = i + 1; j < n; j++)
                {
                    int tmpx = x[j];
                    x[j] = __gcd(x[j], j + 1);
                    int g = x[0];
                    for (int k = 1; k < n; k++)
                    {
                        g = __gcd(x[k], g);
                    }
                    if (g == 1)
                    {
                        ans = min(ans, (n - i) + (n - j));
                    }
                    x[j] = tmpx;
                }
                x[i] = tmp;
            }
            cout << ans << endl;
        }
    }

    return 0;
}