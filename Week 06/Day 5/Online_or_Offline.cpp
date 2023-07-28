#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        float x,y;cin>>x>>y;
       x=x-x*0.1;
       if(x<y) cout<<"ONLINE"<<endl;
       else if(x>y) cout<<"DINING"<<endl;
       else cout<<"EITHER"<<endl;
    }
    
}