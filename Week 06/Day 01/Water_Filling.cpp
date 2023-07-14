#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
// constant
const int mod = 1e9+7;
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int sum = b1+b2+b3;
        if(sum<=1){
            cout<<"Water filling time"<<endl;
        }
        else cout<<"Not now"<<endl;
    }
    return 0;
}