#include <bits/stdc++.h>
using namespace std;
long long test,n,a[10000007],tmp,ll;
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cin>>test;
    while(test--){
        cin>>n;
        for(long long i=1;i<=n;i++) cin>>a[i];
        sort(a+2,a+n+1);
        for(long long i=2;i<=n;i++){
            if(a[i]>a[1]) a[1]+=(a[i]-a[1]+1)/2;
        }
        cout<<a[1]<<"\n";
    }
}