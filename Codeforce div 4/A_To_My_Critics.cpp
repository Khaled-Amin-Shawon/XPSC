/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll                  long long 
#define no                  cout<<"NO"<<endl;
#define yes                 cout<<"YES"<<endl;
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve()
{
   vector<ll>v(3);
   fr(i,3){cin>>v[i];}
   sort(v.begin(),v.end());
   if((v[1]+v[2])>=10)cout<<"YES"<<endl;
   else cout<<"NO"<<endl; 
}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}