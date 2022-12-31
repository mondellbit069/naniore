#include<bits/stdc++.h>
using namespace std;
long long n,s;
double a[1000007];
double ans;
int main(){
    cin>>n;
    for(long long i=1;i<=n;i++) {
        cin>>a[i];
        s+=a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=2;i<=n;i++){
        a[i]=(a[i]+a[i-1]) / 2;
        
    }
    ans=n*a[n]-s;
    cout<<fixed<<setprecision(5)<<ans;
    return 0;


}