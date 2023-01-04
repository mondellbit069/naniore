#include<bits/stdc++.h>
using namespace std;
long long ans=0,n;
string s;
int main(){
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="X++" || s=="++X") ans++;
        else ans--;
    }
    cout<<ans;
}