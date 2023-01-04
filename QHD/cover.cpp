#include<bits/stdc++.h>
using namespace std;
int n,maxx,p,k;
int main(){
    cin>>n>>p>>k;
    freopen("cover.inp","r",stdin);
    freopen("cover.out","w",stdout);
    int a[n];
    float f[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    f[0]=0;
    f[1]=p;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+p;
        for(int j=1;j<=i-1;j++) 
        f[i]=min(f[i],f[j-1]+p+k*(a[i]-a[j])/2);
    }
    cout<<setprecision(1)<<fixed<<f[n];
}