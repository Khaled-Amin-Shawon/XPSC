#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int s;cin>>s;
        if(s<=15)
        {
            if(s<=10) cout<<"Lower Double"<<endl;
             else cout<<"Lower Single"<<endl;
        }
        else {
            if(s>25) cout<<"Upper Single"<<endl;
            else cout<<"Upper Double"<<endl;
        }
       
    }
    
}