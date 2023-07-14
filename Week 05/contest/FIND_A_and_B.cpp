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
   ll a,b,c;
   cin>>a>>b>>c;
   if((a*b)%c==0) {cout<<a*b<<" "<<c<<endl;return;}
   if((a*c)%b==0) {cout<<a*c<<" "<<b<<endl;return;} 
   if((c*b)%a==0) {cout<<c*b<<" "<<a<<endl;return;}
   else cout<<-1<<endl;
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