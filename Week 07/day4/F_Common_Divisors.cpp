#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll g=0,a,ans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        g=__gcd(g,a);
    }
    for(ll i=1;i<=sqrt(g);i++){
        if(g%i==0){
            ans++;
            if(g/i!=i)ans++;
        }
    }
   cout<<ans<<endl;
       
}