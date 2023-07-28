#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(m[a]==0)
        {
            v.push_back(a);
            m[a]++;
        }
    }
    sort(v.rbegin(),v.rend());
    int c=0;
    int sum=0;
    for(auto u:v)
    {
        if(c==2) break;
        sum+=u;
        c++;
    }
    cout<<sum<<endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}