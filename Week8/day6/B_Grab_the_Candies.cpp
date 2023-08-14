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
        int x[n];
        int mihai = 0, bianca = 0;
        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int i = 0; i < n; i++)
        {
            if (x[i] % 2 == 0)
                mihai += x[i];
            else
                bianca += x[i];
        }
        if (mihai > bianca)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}