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
        int n, k;
        cin >> n >> k;

        if (k > 30)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;

        for (int i = n/2-1; i <= n; i++)
        {
            int second = n;
            int first = i;
            bool ok = true;
            for (int j = 1; j <= k - 2; j++)
            {
                int temp = second - first;
                second = first;
                first = temp;
                if (first <= second and first > -1)
                {
                    continue;
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}