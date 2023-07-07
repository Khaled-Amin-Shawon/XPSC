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
    string s;
    cin >> s;
    int ans = 0;
    int j = 0;
    while (j < n)
    {
        cout << s[j] << endl;
        int count = 0;

        if (s[j] == ':')
        {
            for (int i = j; i < n; i++)
            {

                count++;
                if (s[i] == '(')
                    break;
                if (s[i] == ':')
                {
                    ans++;
                }
                cout << s[i] << " " << ans << endl;
            }
        }
        j += count;
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