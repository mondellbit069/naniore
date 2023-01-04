#include<bits/stdc++.h>
using namespace std;
long long test,n,m,i=0,j,tam,ans=0,ans1=0;
bool check;
int main(){
    cin>>test;
    while(test--){
        cin>>n>>m;
        long long a[n], b[m];
        for(long long i=1;i<=n;i++) {
            cin>>a[i];
            ans = ans+a[i];
        }
                   for(long long i=1;i<=m;i++) {
                    cin>>b[i];
                    ans1= ans1+b[i];
                   }
        sort(a+1,a+n+1);
        for(long long i=1;i<=nz)   
            cout<<ans<<"\n";
    }
}