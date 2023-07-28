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
   ll n; cin>>n;
    ll array[50]={0};
    int ans=0,r=0;
    fr(i,n){
        ll q,l;
        cin>>l>>q;
        if(l<=10 && q>=ans){
            ans=q;
            r=i;        }
    }
    cout<<r+1<<endl;
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