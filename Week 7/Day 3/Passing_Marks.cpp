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
    int n,x;cin>>n>>x;
    vector<int>mark(n);
    for(int i=0;i<n;i++) cin>>mark[i];
    sort(mark.rbegin(),mark.rend());
    int low=mark[x-1];
    cout<<low-1<<endl;

    
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
