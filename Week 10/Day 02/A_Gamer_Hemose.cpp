#include<bits/stdc++.h>
#define rep(i,n) for (int i=1;i<=(n);i++)
using namespace std;
int n,h,a[1005];
void solve()
{
	cin>>n>>h;
	rep(i,n)cin>>a[i];
	sort(a+1,a+n+1);
	int t=h/(a[n-1]+a[n]);
	h-=t*(a[n-1]+a[n]);
	t*=2;
	if(h>0) h-=a[n],t++;
	if(h>0) h-=a[n-1],t++;
	cout<<t<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}