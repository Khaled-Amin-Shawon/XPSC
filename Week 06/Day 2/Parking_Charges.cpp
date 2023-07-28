#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a;
    c--;
    ans+=c*b;
    cout<<ans;
}