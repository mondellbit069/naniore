#include<bits/stdc++.h>
using namespace std;
long long testcaselmaxD,n;
int main(){
    cin>>testcaselmaxD;
    while(testcaselmaxD--){
        cin>>n;
                    long long a[n+5]={0};
                            for(long long i=1;i<=n;i++) cin>>a[i];
                                            sort(a+1,a+n+1);
                                                    map <int,pair<int,int>> lmao ;
                                                                        for(long long i=1;i<=n;i++){
                                                                                                 if(lmao.count(a[i]) == 0){
                                                                                                         lmao[a[i]].first = i ;
                                                                                                            lmao[a[i]].second = i ;
                                                                                                                     } 
                                                                                                                        else 
                                                                                                                         lmao[a[i]].second = i ;
                                                                                                                    }
                                                                                                long long tong=0,res=0,ans=0;
                                                                                 long long left[n], right[n] ;
                                                                for (int i = 1 ; i <= n ; i++){
                                                         left[i] = lmao[a[i]].first ;
                                         right[i] = lmao[a[i]].second ;
                         }

            for (int i = 1 ; i <= n ; i++)  res = max(res, (left[i] - 1) * (n - right[i]) + (right[i] - left[i] + 1) * (left[i] - 1)) ;
   for (int i = 1 ; i <= n ; i++) tong = (right[i] - left[i] + 1) / 2 ;
   ans = max(res,tong);
   cout << ans << "\n";
        }
    }
}