#include <bits/stdc++.h>
using namespace std;
long long n,l,d;
string s;
int main(){
                cin>>n;
            while(n--){
                        cin>>l;
                    cin>>s;
                sort(s.begin(),s.end());
            d=s[l-1]-'a';
        cout<<d+1<<"\n";
    }
}
