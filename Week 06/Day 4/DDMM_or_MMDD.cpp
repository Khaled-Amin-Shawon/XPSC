#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;cin>>s;
    int x=s[0]-48;
    int y=s[1]-48;
    int m=s[3]-48;
    int n=s[4]-48;
    int day=x*10+y;
    int mon=m*10+n;
    if(day<=12 && mon<=12) cout<<"BOTH"<<endl;
    else if(mon>12)cout<<"MM/DD/YYYY"<<endl;
    else cout<<"DD/MM/YYYY"<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}