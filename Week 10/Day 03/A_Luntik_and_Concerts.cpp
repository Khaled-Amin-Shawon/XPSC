#include<bits/stdc++.h>
#define R register
#define N 1000201
#define ll long long

int pq[]={1,-1};

inline void solve(){
	R int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a&=1,b&=1,c&=1;
	if(a==0) a=2;
	if(b==0) b=2;
	if(c==0) c=2;
	R int ans=1e9;
	for(R int S=0;S<64;++S){
		R int cha=1* (a > 0) * pq[S&1] + 1 * (a > 1) * pq[S>>1&1]
		+ 2 * (b > 0) * pq[S>>2&1] + 2 * (b > 1) * pq[S>>3&1]
		+ 3 * (c > 0) * pq[S>>4&1] + 3 * (c> 1) * pq[S>>5&1];
		if(cha<0) cha=-cha;
		ans=std::min(ans,cha);
	} 
	printf("%d\n",ans);
}

int main(){
	R int T;
	std::cin>>T;
	while(T--) solve();
}