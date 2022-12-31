#include<bits/stdc++.h>
using namespace std;
long long n,t,a[1000007],f[1000007],ans;
int main(){
    long long test;
    cin>>test;
    while(test--){
        cin>>n;
        for(long long i=1;i<=n;i++){
            cin>>a[i];
            f[i]=1;
        }
        for (int i=1;i<=n;i++) f[i]=1;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i-2;j++)
                for (int z=j+1;z<=i-1;z++)
                    if (a[z]+a[j]==a[i] && z!=j) {
                        f[i]=max(f[i],f[z]+1);
                       
        }	
         ans=max(ans,f[i]+1);

    }
    cout<<ans<<"\n";
}
}