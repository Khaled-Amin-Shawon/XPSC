/*
__________________________
| Author:Md.Moniruzzaman |
--------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x[n];
    int ans;
    bool flag = false;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < (1 << n); i++)
    {
        ans = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                ans += x[j];
            else
                ans -= x[j];
        }
        if (ans % 360 == 0)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    return 0;
}