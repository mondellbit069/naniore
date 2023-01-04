#include<bits/stdc++.h>
using namespace std;
long long n,p,k;
int main(){
    cin>>n>>p>>k;
    long long t=1;
    long long money = 0;
    while(t<=k){
        money=money+(t*n);
        t++;
    }
    if(p>=money) cout<<0;
    else cout<<money-p;
}