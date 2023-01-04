#include<bits/stdc++.h>
using namespace std;
int n;
char b[105] [105];
set<int> a[105];
void lmao(){

        cin>>n;
            for(int i=1;i<=n;i++)a[i].clear();
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                            cin>>b[i][j];
                                if(b[i][j]=='0'&&i!=j)
                                    continue;
                                        a[j].insert(i);
                                }
                  }
                    for(int i=1;i<=n;i++) {
                                cout<<a[i].size()<<' ';
                                    for (auto t:a[i])
                                        cout<<t<<' ';
                                            cout<<endl;

                            }
}
int main(){
    int m;
    cin>>m;
    while(m--)lmao();
}
