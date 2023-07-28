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
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
     bool flag=false;
    for(int x=0;x<=(1<<8);x++)
    {
       int ans=0;
       vector<int> v = a;
       for(int i=0;i<n;i++)
       {
         v[i]=v[i]^x;
       }
       for(int j=0;j<n;j++)
       {
          ans= ans^v[j];
       }
       if(ans==0) 
       {
          cout<<x<<endl;
          flag=true;
          break;
      }
    }
   if(!flag) cout<<-1<<endl;
   

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
