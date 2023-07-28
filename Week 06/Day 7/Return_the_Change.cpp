#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
       int n;cin>>n;
       int x=n%10;
       if(x<5)
       {
          n-=x;
       }
       else 
       {
         x=10-x;
         n+=x;
       }
       int ans=100-n;
       cout<<ans<<endl;

    }
    
}