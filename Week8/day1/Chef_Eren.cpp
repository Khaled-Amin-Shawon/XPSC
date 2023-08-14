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
        int n, a, b;
        cin >> n >> a >> b;
        int total = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                total += a;
            else
                total += b;
        }
        cout << total << endl;
    }

    return 0;
}