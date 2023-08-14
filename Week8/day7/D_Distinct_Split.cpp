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
        int n, i, ans = 0;
        string s;
        cin >> n >> s;
        int suf[n + 3] = {0}, pref[n + 3] = {0};
        set<char> st;
        for (i = 0; i < n; i++)
        {
            st.insert(s[i]);
            pref[i + 1] = st.size();
        }
        st.clear();
        for (i = n - 1; i >= 0; i--)
        {
            st.insert(s[i]);
            suf[i + 1] = st.size();
        }
        for (i = 1; i < n; i++)
        {
            ans = max(ans, pref[i] + suf[i + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}