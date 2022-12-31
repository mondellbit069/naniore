#include<bits/stdc++.h>
using namespace std;
long long n,n1,ans;
int main(){
    cin>>n;
    while(n--){
        cin>>n1;
        if(n1!=0)
        for(long long i=1;i<=n1;i++){
            if(n1 & i == 0) ans++;
        }
        else
        if(n1==0){
            ans=1;

        }
        
        cout<<ans<<"\n";
    }
}