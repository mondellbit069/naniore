#include<bits/stdc++.h>
using namespace std;
long long n,test,MOD=1000000007,n1,n2;
int main(){
    cin>>test;
    while(test--){
        cin>>n;
        n1=(( n * ( n + 1) % MOD * ( 2 * n + 1 ) % MOD * 2022 % MO D) * binpow( 6 , MOD -2 ) );
        n2=( (n - 1) * (n) % MOD *( n + 1 ) % MOD * 2022 % MOD * binpow ( 3 , MOD - 2) );
        debug(n1);
        debug(n2);
        long long tam = (n1+n2)%MOD;
        cout<<(tam)%MOD<<"\n";
    }
   
    
}