#include <bits/stdc++.h>
#define sqr(i) i*i
using namespace std;
long long test;
double AB,AC,BC;
struct TOADO{
    float x;
    float y;
};
TOADO a,b,c;
int main(){
    cin>>test;
    while(test--){
        cin>>a.x>>a.y;
        cin>>b.x>>b.y;
        cin>>c.x>>c.y;
        AB= sqrt( sqr(a.x + a.y) + sqr(b.x + b.y));
        AC= sqrt( sqr(b.x + b.y) + sqr(c.x + c.y));
        BC= sqrt( sqr(a.x + a.y) + sqr(c.x + c.y));
        if(sqr(AB)+sqr(AC) == sqr(BC)||sqr(BC)+sqr(AC) == sqr(AB)||sqr(AB)+sqr(BC) == sqr(AC)) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}
