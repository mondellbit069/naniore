#include <bits/stdc++.h>
using namespace std;
long long n,a,b,c,temp;
int main(){
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    cout<<b<<"\n";
    }
}