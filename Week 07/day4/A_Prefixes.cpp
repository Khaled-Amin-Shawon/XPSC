#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string a;
    cin >> a;
    for (int i = 0; i < n; i+=2)
    {
        if(a[i]==a[i+1]&&i+1<n){
            cnt++;
            if(a[i]=='a')a[i]='b';
            else a[i]='a'; 
        }
    }
    cout <<cnt<< endl;
    for(int i=0;i<n;i++)cout<<a[i];
    cout<<endl;
}