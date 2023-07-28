#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char cur = 'A';
    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == cur)
        {
            if(s[i]=='A') alice++;
            else bob++;

        }
        else
        {
          cur=s[i];
        }
    }
    cout<<alice<<" "<<bob<<endl;
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