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
ll  msb_b(ll x)
{
    if(x==0)
    {
        return 0;
    }
    ll msb=0;
    x=x/2;
    while (x!=0)
    {
        x=x/2;
        msb++; 
    }
    return msb;
}
void solve()
{
    int n;cin>>n;
    ll x[n+1];
    ll loc[n+1]={0};
     ll ans=0;
    unordered_map<ll,vector<ll>>mp;
    for(int i=0;i<n;i++) 
    {
        cin>>x[i];
        ll msb=msb_b(x[i]);
        mp[msb].push_back(i);
    }
    for(auto u:mp)
    {
        ll size=u.second.size();
        size--;
        ans+=((size*(size+1))/2);
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
