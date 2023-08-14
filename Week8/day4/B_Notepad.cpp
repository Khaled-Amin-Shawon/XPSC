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
        string s;
        cin >> s;
        unordered_map<string, ll> mp;
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            string s1;
            s1 = s[i];
            s1 += s[i + 1];
            if (mp.find(s1) == mp.end())
            {
                mp[s1] = i;
            }
            else
            {
                if (mp[s1] != i - 1)
                {
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}