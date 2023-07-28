
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
void solve()
{
     int n; cin>>n;
       map<int,int>mp;
       vector<int>v(n+1);
        for (int i=0;i<n; i++)
        {
            int x; cin>>x;
            if(x<=n) mp[x]++;
        }
        int ans=0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j+=i)
            {
                v[j]+=mp[i];
            }
            ans=max(ans,v[i]);
        }
        cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
return 0;
}

