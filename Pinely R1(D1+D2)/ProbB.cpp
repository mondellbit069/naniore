#include <bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
    cin>>n;
    while(n--){
        cin>>m;
        vector<int> a(m);
        for(long long i=0;i<m;i++) cin>>a[i];
        set<int> st;
        for(auto i: a) {
            st.insert(i);
        }
        if(st.size()>2) {
            cout<<m<<"\n";
            }
            else if(st.size() == 1) {
                cout<<1<<endl;
            }
        else {
            cout<<(2 + (m-2) / 2)<<endl;
        }
    }
}