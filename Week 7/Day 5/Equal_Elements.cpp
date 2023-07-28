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
    int n;cin>>n;
    int x[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) 
    {
        cin>>x[i];
        mp[x[i]]++;
    }
    int mx=INT_MIN;
    for(auto u:mp)
    {
        int fre=u.second;
        if(fre>mx) mx=fre;
    }
    int ans=n-mx;
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
