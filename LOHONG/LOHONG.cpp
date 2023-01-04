#include <bits/stdc++.h>
using namespace std;
long long n,ans;
int a[10];
int main(){
    freopen("LOHONG.inp","r",stdin);
    freopen("LOHONG.out","w",stdout);
    cin>>n;
    a[0]=a[4]=a[6]=a[9]=1;
    a[8]=2;
    while(n!=0){
        ans+=a[n%10];
        n/=10;
    }
    cout<<ans;
}