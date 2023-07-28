#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
       int r,o;cin>>r>>o;
       int run=o*6*6;
       if(run>=r) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
}