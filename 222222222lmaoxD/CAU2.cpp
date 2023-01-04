#include <bits/stdc++.h>
using namespace std;
long long k,s1,s2=0,d=1,v1=30,v2=60;
int main(){
    cin>>k;
    s1=k;
    while(s1+v1*d>=s2+v2*d){
        v1=v1+v1*0.1;
        v2=v2+v2*0.1;
        d++;
    }
    cout<<"So gio la: "<<d;
}