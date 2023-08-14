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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int mx = a[1], c = 0, j;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] <= mx)
            {
                j = i - 1;
                while (j >= 1)
                {
                    if (a[i] <= a[j])
                        c++;
                    j--;
                }
            }
            else
                mx = a[i];
        }
        cout << c << endl;
    }

    return 0;
}