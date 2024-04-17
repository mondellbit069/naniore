#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 998244353
#define b(x) (1<<((x)-1))

#define N 1000000

ll i,j,k,n,m,t,l,r,x,y,f[105][105],g[N+50],rk[N+50];

//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng(8);

#define B 720720
bool cmp(ll x,ll y){return g[x]>g[y];}

int main() {
	freopen("test.in","w",stdout);
	for(i=1;i<=N;i++){
		rk[i]=i;
		for(j=i;j<=N;j+=i)g[j]++;
	}
	sort(rk+1,rk+N+1,cmp);
	t=150;
	cout<<t<<endl;
	while(t--){
		int it=0;
		n=100;
		cout<<n<<' '<<n<<endl;
		for(i=1;i<=n;i++)for(j=1;j<=n;j++)f[i][j]=B;
		
		for(i=3;i<=n;i+=1)for(j=3;j<n;j+=1)if(i>9||j>11){
			if(i>11&&j>13){
				if(!((10000+i-j)%3))f[i][j]=rk[rng()%300+20];
			}
			else{
				if((i&1)&&(j&1))f[i][j]=rk[rng()%300+20];
			}
		}
		
		f[2][1]=B/2; f[2][2]=B/4; f[2][3]=B/8; f[2][4]=B/16;
		f[3][5]=B/3; f[3][6]=B/9;
		f[4][7]=B/5;
		f[5][8]=B/7;
		f[6][9]=B/11;
		f[7][10]=B/13;
		
		f[n-1][n]=f[n][n-1]=1;
		
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				cout<<f[i][j]<<" \n"[j==n];
			}
		}
	}
}
