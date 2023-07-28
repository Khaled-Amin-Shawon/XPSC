#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
       int a,b;cin>>a>>b;
       int x=a/2;
       if(a%2!=0) x++;
       if(x>b) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    
}