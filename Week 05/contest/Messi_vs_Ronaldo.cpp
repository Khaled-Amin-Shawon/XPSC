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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a * 2 + b) == (c * 2) + d)
        cout << "Equal" << endl;
    if ((a * 2 + b) > (c * 2) + d)
        cout << "Messi" << endl;
    if ((a * 2 + b) < (c * 2) + d)
        cout << "Ronaldo" << endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}