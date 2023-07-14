/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
void solve()
{

    ll n;
    cin >> n;
    ll v[1440] = {0};
    fr(i, n * 2)
    {
        int k;
        cin >> k;
        v[k]++;
    }
    ll ans = 0, count = 0;
    for (ll i = 0; i < 1440; i++)
    {
        ans = max(v[i], ans);
    }
    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}