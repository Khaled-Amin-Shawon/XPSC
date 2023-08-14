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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x = a[n - 1], c = 0;
        int y = a[0];
        int c1 = 0, it = -1;
        if (x == y)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == x)
                    c++;
            }
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (c1 == k)
                {
                    it = i - 1;
                    break;
                }
                if (a[i] == y)
                    c1++;
            }
            if (it != -1)
            {
                for (int j = it; j < n; j++)
                {
                    if (a[j] == x)
                        c++;
                }
            }
        }
        if (c >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}