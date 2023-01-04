#include<bits/stdc++.h>
using namespace std;
long long n,l;
int main(){
    cin>>n>>l;
    while(l--){
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n;
}