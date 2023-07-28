#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x[4];
    for(int i=0;i<4;i++) cin>>x[i];
    int sum=0;
    for(int i=0;i<4;i++) sum+=x[i];
    bool ans=false;
    for(int i=0;i<4;i++)
    {
        int m=sum-x[i];
        if(x[i]>m)
        {
            ans=true;
            break;
        } 
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}