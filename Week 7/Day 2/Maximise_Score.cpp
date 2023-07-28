#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0)
        {
            l = abs(x[i] - x[i - 1]);
        }
        if (i + 1 < n)
        {
            r = abs(x[i] - x[i + 1]);
        }
        ans.push_back(max(l, r));
    }
    sort(ans.begin(), ans.end());
    cout << ans.front() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}