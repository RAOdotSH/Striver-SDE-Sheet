/*
                                                                                                                                                                                                                                                                                                          
 ####### ########  #######  #######  ##   ##           #######  ##   ##  ##   ##           #######  ###  ##  ######            #######  #######  ##       ##      
            ##          ##           ##  ##                 ##  ##   ##  ##   ##                ##  #### ##       ##                             ##       ##      
 #######    ##     ##   ##  ##       #####             ######   ##   ##  #######           #######  ## ####  ##   ##           #######  ####     ##       ##      
      ##    ##     ##   ##  ##       ##  ##            ##   ##  ##   ##       ##           ##   ##  ##  ###  ##   ##                ##  ##       ##   ##  ##   ## 
 #######    ##     #######  #######  ##   ##           #######  #######  #######           ##   ##  ##   ##  ######            #######  #######  #######  ####### 
                                                                                                                                                                  
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<ll> prices(n);

    for(int i=0; i<n; i++) cin>>prices[i];

    ll m = prices[0], profit = 0;

    for(int i=0; i<n; i++){
        m = min(m, prices[i]);

        profit = max(profit, prices[i] - m);
    }

    cout<<profit<<endl;
    
    return;
}

int main(){
    fastIO
    ll t;
    cin>>t;
           
    while(t--){
        solve();
    }
              
    return 0;
}