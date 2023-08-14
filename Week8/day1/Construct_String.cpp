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

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1] && i < n - 1)
            {
                if (cnt >= 2 && cnt % 2 == 0)
                {
                    cout << s[i];
                    cnt = 0;
                }
                else if (cnt % 2 != 0)
                {
                    cout << s[i] << s[i - 1];
                    cnt = 0;
                }
                else
                {
                    cout << s[i];
                }
            }
            else if (s[i] == s[i + 1] && i < n - 1)
            {
                cnt++;
            }

            else
            {
                if (s[i] != s[i - 1])
                    cout << s[i];

                else
                {
                    if (cnt >= 2 && cnt % 2 == 0)
                    {
                        cout << s[i];
                        cnt = 0;
                    }
                    else if (cnt % 2 != 0)
                    {
                        cout << s[i] << s[i - 1];
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}