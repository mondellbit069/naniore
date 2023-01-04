#include<bits/stdc++.h>
using namespace std;
long long n,t=0,k,sum,ans;
int main(){
     freopen("KSEG.inp","r",stdin);
    freopen("KSEG.out","w",stdout);
    cin>>n>>k;
    long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    long long i=1,j=1;
    while(i<=n && j<=n){
        while(t+a[j]<=k && j<=n){
            t+=a[j];
            ans=max(ans,j-i+1);
            j++;
        }
        t-=a[i];
        i++;
    }
    cout<<ans;
}