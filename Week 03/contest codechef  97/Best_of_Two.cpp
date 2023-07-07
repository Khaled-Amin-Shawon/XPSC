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
    vector<ll> a(3);
    vector<ll> b(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll as = 0, bs = 0;
    for (ll i = 2; i > 0; i--)
    {//cout<<as<<" "<<bs<<" "<<a[i]<<" "<<b[i]<<endl;
        as += a[i];
        bs += b[i];
    }
    //cout<<as<<" "<<bs<<endl;
    if(as==bs)cout<<"Tie"<<endl;
    if(as>bs)cout<<"Alice"<<endl;
    if(as<bs)cout<<"Bob"<<endl;


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