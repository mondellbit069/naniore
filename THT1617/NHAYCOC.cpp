#include<bits/stdc++.h>
using namespace std;
long long n,p;
bool checkxD(long long a){
    if(a%3==0) return true;
    if(a%3==1 && a%2==1) return true;
    return false;
}
int main(){
    freopen("NHAYCOC.inp","r",stdin);
    freopen("NHAYCOC.out","w",stdout);
    cin>>n;
    while(n--){
        cin>>p;
        if(checkxD(p)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}