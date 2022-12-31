#include<bits/stdc++.h>
using namespace std;
long long ans=1;
long long test=0;
long long n;
 long long minn=999999999999,min1;
 void sus(){
   cin>>n;
        long long a[n];
        for(long long i=1;i<=n;i++){
            cin>>a[i];
            ans*=a[i];
    }
    min1=n-1;
    ans=ans+min1;
    cout<<(ans)*2022<<"\n";
    ans=1;
 }
int main(){
    cin>>test;
    while(test--) sus();
}