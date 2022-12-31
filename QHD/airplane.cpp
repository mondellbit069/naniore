#include<bits/stdc++.h>
using namespace std;
long long n,maxx;
int main(){
    freopen("airplane.inp","r",stdin);
    freopen("airplane.out","w",stdout);
    cin>>n;
    long long a[n],f[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    f[1]=a[1]-1+5;
    long long ma=a[1];
    for(long long i=2;i<=n;i++) 
        if(a[i]>=ma){
            f[i]=f[i-1]+a[i]-ma+5;
            ma=a[i];
        }
        else f[i]=f[i-1];
    maxx=f[n];
    cout<<maxx;
}