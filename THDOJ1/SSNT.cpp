#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
bool ngto(ll a){
    if(a<2){
        return false;
    }
    for(ll i=2; i<=int(sqrt(a));i++)
        if(a%i==0) return false;
    return true;
}
bool sngto(ll a){
    while(a>0){
        if(ngto(a)==false) return false;
        a/=10;
    }
    return true;
}
int main(){
    for(ll i=10000;i<=99999;i++)
        if(sngto(i)) cout<<i<<"\n";

}