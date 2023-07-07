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
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    // ll ans=INT_MAX;
    // for (ll i = 0; i < n; i++)
    // {
    // ll ans1=abs(v[0][i]-v[1][i]);
    // ans=min(ans1,ans);}
    // cout<<ans<<endl;
    for (ll i = 0; i < n; i++)
    {
        ll ans = (v[0][i] - v[1][i]);
        ll s = v[2][i] - (v[0][i] - v[1][i]);
        // cout<<s<<endl;
        if (s < 97)
        {
            char a = 122 - (97 - s);
            cout << a;
        }
        else if (s > 122)
        {
            if (v[2][i] == 'z'||v[1][i] == 'z'||v[0][i] == 'z' )
            {
                char a = 97 + (s - 122) - 1;
                cout << a;
            }
            else
            {
                char a = 97 + (s - 122);
                cout << a;
            }
        }
        else
        {
            char a = s;
            cout << a;
        }
    }
    cout << endl;

    // cout<<ans<<endl;
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
// char a='a',z='z'