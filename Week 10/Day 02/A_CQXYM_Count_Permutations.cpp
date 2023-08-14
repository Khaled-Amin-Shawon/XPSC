 #include<bits/stdc++.h>
#define ll long long
#define ls(_o) (_o<<1)
#define rs(_o) ((_o<<1)|1)
#define N 3100
#define p 1000000007
#define p1 998244353
#define p2 1000000007
using namespace std;
namespace ywy{
	inline int get(){
		int n=0;char c;while((c=getchar())||23333){
			if(c>='0'&&c<='9')break;if(c=='-')goto s;
		}n=c-'0';while((c=getchar())||23333){
			if(c>='0'&&c<='9')n=n*10+c-'0';else return(n);	
		}s:while((c=getchar())||23333){
			if(c>='0'&&c<='9')n=n*10-c+'0';else return(n);	
		}
	}
	void ywymain(){
		int T=get(); while(T--){
			int n=get(); ll ans=1;
			for(int i=3;i<=n*2;i++) ans=ans*i%p;
			printf("%lld\n",ans);
		}
	}
}
int main(){
	ywy::ywymain();	
}