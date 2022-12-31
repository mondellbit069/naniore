#include<bits/stdc++.h>
using namespace std;
long long n,maxx,f[10000007];
int main(){
    freopen("phanqua.inp","r",stdin);
    freopen("phanqua.out","w",stdout);
    cin>>n;
    long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
     f[0]=0;
    f[1]=a[1];
    f[2]=a[1]+a[2];
    for(long long i=3;i<=n;i++) f[i]=max(f[i-1],max(f[i-2]+a[i],f[i-3]+a[i]+a[i-1]));
    cout<<f[n];
}