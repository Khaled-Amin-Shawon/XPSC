#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int x = 0; x < (1 << 8); x++)
    {
        vector<int> v = a;
        for (int i = 0; i < n; i++)
        {
            v[i] = v[i] ^ x;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ v[i];
        }
        if (ans == 0)
        {
            cout << x << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }

    return 0;
}