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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    fr(i, n) { cin >> v[i]; }
    sort(v.begin(), v.end());
    ll i=0,j=1,ans=0,r=0;
    while (j<n)
    {
        //cout<<v[i]<<" "<<v[j]<<" ";
        ll ab=abs(v[i]-v[j]);
        if(ab<=k){
            ans++;
            r=max(ans,r);
        }
        else{
            ans=0;
        }
       //cout<<r<<endl;
        i=j;j++;
    }
    cout<<n-r-1<<endl;
    
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