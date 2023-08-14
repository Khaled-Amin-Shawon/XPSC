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

        vector<pair<int, int>> ops;
        int a[n];

        int max = 0;
        bool sign = 0;
        int id = 1;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (abs(a[i]) > max)
            {
                max = abs(a[i]);
                sign = a[i] >= 0;
                id = i + 1;
            }
        }

        for (int i = 1; i <= n; ++i)
            ops.push_back({i, id});

        if (sign)
            for (int i = 1; i < n; ++i)
                ops.push_back({i + 1, i});
        if (!sign)
            for (int i = n - 1; i > 0; --i)
                ops.push_back({i, i + 1});

        cout << ops.size() << endl;
        for (pair<int, int> ip : ops)
            cout << ip.first << " " << ip.second << endl;
    }

    return 0;
}