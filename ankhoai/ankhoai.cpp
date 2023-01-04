#include <bits/stdc++.h>
using namespace std;
long long n=1;
string s;
int main(){
    while(n=1){
        cin>>s;
        if(s=="[END]") n=0;
        else {
            cin>>n;
            if(n%5==0||n%5==2) cout<<"Hanako"<<"\n";
            else cout<<"Taro"<<"\n";
        }
    }
}