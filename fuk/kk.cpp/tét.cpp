#include<bits/stdc++.h>
using namespace std;
long long x,a,b,c,ans,test;
long long gcd(long long a , long long b){
    if(b!=0) 
        return gcd(b, a%b);
    return a;
}
long long lcm(long long a, long long b){
    return a/gcd(a,b)*b;
}
int main(){
    cin>>test;
    while(test--){
        cin>>x>>a>>b>>c;
        ans= x/a + x/b + x/c - x/lcm(a,b) - x/lcm(a,c) - x/lcm(b,c) + x/lcm(a,lcm(b,c));
        cout<<ans<<"\n";
    }
    return 0;
}