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
    vector<string>s(8);
    fr(i,8){
        cin>>s[i];
    }
    fr(i,8){
        fr(j,8){
            if(s[i][j]!='.')
            cout<<s[i][j];
        }
    }
    cout<<endl;
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