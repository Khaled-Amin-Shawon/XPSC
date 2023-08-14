#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        v.push_back({a[i],i+1});
    }
    sort(v.rbegin(),v.rend());
    int ans=0,x=0;
    for(auto u:v){
        ans+=u.first*x+1;
        x++;
    }
     cout <<ans<< endl;
   
    for(auto u:v){
        cout<<u.second<<" ";
    }
}