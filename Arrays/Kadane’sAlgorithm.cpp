/*
                                                                                                                                                         
 ##   ##  #######  ######   #######  ###  ##  #######  #######           #######  ##       #######  #######  #######  ######  ########  ##   ##  ##   ## 
 ##  ##        ##       ##       ##  #### ##                                  ##  ##                     ##       ##    ##       ##     ##   ##  ### ### 
 #####    #######  ##   ##  #######  ## ####  ####     #######           #######  ##       ##   ##  ##   ##  #######    ##       ##     #######  ####### 
 ##  ##   ##   ##  ##   ##  ##   ##  ##  ###  ##            ##           ##   ##  ##   ##  ##    #  ##   ##  ##  ##     ##       ##     ##   ##  ## # ## 
 ##   ##  ##   ##  ######   ##   ##  ##   ##  #######  #######           ##   ##  #######  #######  #######  ##   ##  ######     ##     ##   ##  ##   ## 

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<ll> V(n);

    for(int i=0; i<n; i++) cin>>V[i];

    ll curr_sum = 0, max_sum = 0;
    for(int i=0; i<n; i++){
        curr_sum += V[i];
        if(curr_sum < 0) curr_sum = 0;
    
        max_sum = max(max_sum, curr_sum);
    }

    cout<<max_sum<<endl;
        
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