/*
                                                                                                                                                         
 #######  #######  #######  #######  #######  ##           ##   #######          ########  #######  ######   #######  ###  ##  #######  ##       ####### 
      ##       ##                         ##  ##          ##                        ##          ##    ##          ##  #### ##           ##               
 #######  #######  #######  ##       #######  ##         ##     #######             ##     #######    ##     #######  ## ####  ##   ##  ##       ####    
 ##       ##   ##       ##  ##       ##   ##  ##   ##                ##             ##     ##  ##     ##     ##   ##  ##  ###  ##    #  ##   ##  ##      
 ##       ##   ##  #######  #######  ##   ##  #######           #######             ##     ##   ##  ######   ##   ##  ##   ##  #######  #######  ####### 

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<vector<ll>> pascal(n);
    for(int i=0; i<n; i++){
        pascal[i].resize(i+1);

        pascal[i][0] = pascal[i][i] = 1;

        for(int j=1; j<i; j++) pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) cout<<pascal[i][j]<<" ";
        cout<<endl;
    }
    
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