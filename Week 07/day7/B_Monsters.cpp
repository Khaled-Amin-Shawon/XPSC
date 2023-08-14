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
        int n, k, x, y;
        cin >> n >> k;
        int a[n], b[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]  %k==0)
                x = a[i] / k-1;
            else
                x = (a[i] / k);
            y = a[i] - (x * k);
            v.push_back({-1 * y, i + 1});
        }
        // for (auto u : v)
        // {
        //     cout<<u.first<<" " << u.second << " ";
        // }
        sort(all(v));
        for (auto u : v)
        {
            cout << u.second << " ";
        }
        //  for (auto u : v)
        // {
        //     cout<<u.first<<" " << u.second << " ";
        // }
        cout << endl;
    }

    return 0;
}