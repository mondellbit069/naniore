#include<bits/stdc++.h>
using namespace std;
long long n,lmaogei;
int main(){
    cin>>n;
    while(n--){
        cin>>lmaogei;
        if(lmaogei%2==1){
            for(long long i=1;i<=lmaogei;i++) 
                cout<<1<<" ";
                    cout<<"\n";
        }
        else{
            for(long long i=1;i<=lmaogei-2;i++)
                    cout<<2<<" ";
                            cout<<1<<" "<<3;
        }
        cout<<"\n";
    }
}