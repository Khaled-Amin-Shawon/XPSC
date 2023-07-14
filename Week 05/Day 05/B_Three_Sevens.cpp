#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
vector <int> v[50005];
int ans[50005];
int main(){
    int T = 1, kase = 0;
    cin >> T;
    while (T--) {
        int n;
        scanf("%d",&n);
        for(int i=1,t;i<=n;i++){
            scanf("%d",&t),v[i].clear();
            for(int j=1,x;j<=t;j++) scanf("%d",&x),v[i].push_back(x);
        }
        int f=1;
        map <int,int> mp;
        for(int i=n;i;i--){
            int p=-1;
            for(auto t:v[i]) if(!mp.count(t)) p=t;
            if(p==-1){
                f=0;
                break;
            }
            ans[i]=p;
            for(auto t:v[i]) mp[t]=1;
        }
        if(!f) puts("-1");
        else for(int i=1;i<=n;i++) printf("%d%c",ans[i],i==n?'\n':' ');
    }
    return 0;
}
