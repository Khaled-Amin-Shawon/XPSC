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
    ll n, m, sum = 0;
    cin >> n >> m;
    fr(i, m)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    if (n == m)
    {
        cout << 0 << endl;
        return;
    }
    if ((sum - (n * (m - 1))) <= 0)
    {
        cout << 0 << endl;
        return;
    }

    if ((sum - (n * (m - 1))) > 0)
    {
        cout << (sum - (n * (m - 1))) << endl;
        return;
    }
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