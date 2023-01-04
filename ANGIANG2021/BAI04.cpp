#include<bits/stdc++.h>
using namespace std;
long long n,ans,res,t1=1,t2=9,maxx;
int main(){
    cin>>n;
    for(long long i=1;i<n;i++){
        t1*=10;
    }
    for(long long i=1;i<n;i++){
        t2=t2*10+9;
    }
    ans=int(sqrt(t1-1)) + 1;
    res=int(sqrt(t2));
    for(long long i=ans ; i<=res ; i++){
        if(i*i % 45 == 0) maxx=max(maxx, i*i);
    }
    cout<<maxx;
}