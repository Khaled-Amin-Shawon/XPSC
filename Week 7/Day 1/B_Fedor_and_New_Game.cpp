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
   int n,m,k;
   cin>>n>>m>>k;
   int x[m+1];
   for(int i=0;i<m+1;i++) cin>>x[i];
   int ans=0;
   for(int i=0;i<m;i++)
   {
      int res=0;
      res=x[i]^x[m];
     // cout<<res<<endl;
      int countOne=__builtin_popcount(res);
      //cout<<countOne<<endl;
      if(countOne<=k) ans++;
   }
   cout<<ans<<endl;
return 0;
}
