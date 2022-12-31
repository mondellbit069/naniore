#include<bits/stdc++.h>
using namespace std;
long long n,a[10];
int main(){
    cin>>n;
    while(n--){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]==a[2]) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
